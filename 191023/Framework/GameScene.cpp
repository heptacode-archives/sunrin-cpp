#include "stdafx.h"
#include "GameScene.h"


GameScene::GameScene()
{
}


GameScene::~GameScene()
{
}

void GameScene::Initialize()
{
	background
		= PushBackGameObject(
		new GameObject(L"resources/background.jpg"));

	BulletManager* bm = (BulletManager*)PushBackGameObject(new BulletManager());

	player = 
		(Player*)PushBackGameObject(
		new Player(L"resources/player/Player.png", bm));
	player->transform->SetPosition(300.0f, 300.0f);
}