#include "stdafx.h"
#include "GameScene.h"
GameScene::GameScene() {

}

GameScene::~GameScene() {

}

void GameScene::Initialize() {
	background = PushBackGameObject(new GameObject(L"assets/background.jpg"));
	background->transform->SetPosition(300.0f, 300.0f);

	player = (Player *)PushBackGameObject(new Player(L"assets/Player/apple.png"));
	player->transform->SetPosition(100.0f, 100.0f);
}
