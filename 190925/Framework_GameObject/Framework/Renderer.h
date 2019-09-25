#pragma once
#include "Component.h"
#include "ResourceManager.h"
#include "Transform.h"

class Renderer :
	public Component
{
public:
	Renderer();
	Renderer(const wchar_t* imagePath);
private:
	Sprite* currentSprite;
	float alpha;
	bool initialized;

public:
	bool GetInitialized();
	virtual void Update() {}
	void Render(ID2D1HwndRenderTarget& renderTarget, Transform& transform);
};

