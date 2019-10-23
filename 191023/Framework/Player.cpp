#include "stdafx.h"
#include "Player.h"
#include "InputManager.h"


Player::Player(const wchar_t* path, BulletManager* bm)
:GameObject(path), bm(bm)
{
	moveSpeed = 3.0f;
}

void Player::Shoot()
{
	Bullet* b = bm->PushBackPlayerBullet(new Bullet(L"a.png", 300.0f, 0.0f, 0.5f, 0.001f, 1.0f));
	b->transform->position = transform->position;
	b->transform->SetScale(0.1f, 0.1f);
}

void Player::Update()
{
	if (InputManager::GetKeyState(VK_UP))
	{
		transform->position.y -= moveSpeed;
	}
	if (InputManager::GetKeyDown(VK_SPACE))
	{
		Shoot();
	}
}

Player::~Player()
{
}