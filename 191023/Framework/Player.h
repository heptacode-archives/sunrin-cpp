#pragma once
#include "GameObject.h"
#include "BulletManager.h"
class Player :
	public GameObject
{
public:
	Player(const wchar_t* path, BulletManager* bm);
	~Player();

	float moveSpeed;	//이동 속도
	virtual void Update();	//업데이트 처리

	BulletManager* bm;
	void Shoot();
};