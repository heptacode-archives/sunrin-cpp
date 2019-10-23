#pragma once
#include "GameObject.h"
#include "BulletManager.h"
class Player :
	public GameObject
{
public:
	Player(const wchar_t* path, BulletManager* bm);
	~Player();

	float moveSpeed;	//�̵� �ӵ�
	virtual void Update();	//������Ʈ ó��

	BulletManager* bm;
	void Shoot();
};