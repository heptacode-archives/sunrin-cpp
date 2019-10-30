#pragma once
#include "Animation.h"

class SheetAnimation
	:public Animation
{
public:
	SheetAnimation(const int state, float fps, const wchar_t* sheetPath, int pixelWidth, int pixelHeight, int length);	//pixelWidth,Height: �� �������� ����,����ũ��
	SheetAnimation(const int state, float fps, const wchar_t* sheetPath, int row,  int length);	//row: ���ο� ����� �ִϸ��̼��� ����
public:
	Sprite* sheet;
	int width, height;	//�ִϸ��̼��� �ڸ� ����
	int rowCount;
	virtual void SetSourceRect(D2D1_RECT_F& outRect);
	virtual Sprite* GetCurrentSprite();
	virtual Vector2 GetAnimationSize();
	virtual Sprite* UpdateAnim();
	std::vector<D2D1_RECT_F> sourceRects;

};