#pragma once
#include "Animation.h"

class ListAnimation
	:public Animation
{
public:
	ListAnimation(const int state, float fps); //�ʱ�ȭ �ܰ迡�� PushBackSprite�� list �ϼ�
	virtual ~ListAnimation();
public:
	std::list<Sprite*> sprites;
	std::list<Sprite*>::iterator iter;			//���� Sprite��

public:
	virtual void SetSourceRect(D2D1_RECT_F& outRect) {}
	virtual Sprite* UpdateAnim(); 
	virtual Sprite* GetCurrentSprite();
	virtual Vector2 GetAnimationSize();
	virtual void Reset();
	void PushBackSprite(Sprite* sprite);
	void PushBackSprite(const wchar_t* path);
};
