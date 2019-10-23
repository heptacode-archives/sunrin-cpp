#pragma once
#include "GameObject.h"
class Bullet :
	public GameObject
{
public:
	Bullet(const wchar_t* path, float speed, float speedRate, float angle, float angleRate, float damage);
	~Bullet();
	
	float speed;			// �ӵ�
	float speedRate;	// ���ӵ�
	float angle;			// ����
	float angleRate;		// ���ӵ�
	float damage;		// ������

	virtual void Update();
	virtual void Move();
	virtual void Damage();
};