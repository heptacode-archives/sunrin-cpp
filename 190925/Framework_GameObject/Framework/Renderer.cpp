#include "Renderer.h"
#include "Framework.h"

Renderer::Renderer()
	: Component(), currentSprite(nullptr), alpha(1.0f), initialized(false)
{
}

Renderer::Renderer(const wchar_t* imagePath)
	: Component(), currentSprite(Framework::GetInstance().GetScene().resourceManager->LoadBitmapFromFile(imagePath, 0, 0)), alpha(1.0f), initialized(true)
{
}

bool Renderer::GetInitialized()
{
	return initialized;
}

void Renderer::Render(ID2D1HwndRenderTarget& renderTarget, Transform& transform)
{
	if (!currentSprite||!currentSprite->bitmap)
	{
		return;
	}
	D2D1_SIZE_U size;
	size = currentSprite->bitmap->GetPixelSize();
	
	Point positioningCenter;
	positioningCenter.x = transform.position.x - transform.positioningCenter.x;
	positioningCenter.y = transform.position.y - transform.positioningCenter.y;

	D2D1_RECT_F rect;
	rect.left =positioningCenter.x - size.width * 0.5f;//* o->scale.x;
	rect.top = positioningCenter.y- size.height * 0.5f;// *o->scale.y;
	rect.right =  positioningCenter.x + size.width * 0.5f;// *o->scale.x;
	rect.bottom = positioningCenter.y + size.height * 0.5f;// *o->scale.y;

	Point scalingCenter;
	scalingCenter.x = positioningCenter.x + transform.scalingCenter.x;
	scalingCenter.y = positioningCenter.y + transform.scalingCenter.y;

	Point rotatingCenter;
	rotatingCenter.x = positioningCenter.x + transform.rotatingCenter.x;
	rotatingCenter.y = positioningCenter.y + transform.rotatingCenter.y;

	renderTarget.SetTransform(
		D2D1::Matrix3x2F::Scale(
			transform.scale.x,
			transform.scale.y,
			scalingCenter) 
		* D2D1::Matrix3x2F::Rotation(
			transform.rotatingAngle,
			rotatingCenter
		));
	renderTarget.DrawBitmap(currentSprite->bitmap, &rect, alpha, D2D1_BITMAP_INTERPOLATION_MODE_LINEAR, NULL);

}
