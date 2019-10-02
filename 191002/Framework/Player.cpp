#include "stdafx.h"
#include "Player.h"
#include "InputManager.h"
#include "TimeManager.h"

Player::Player(const wchar_t* path) : GameObject(path) {
	moveSpeed = 180.0f;
}

void Player::Update() {
	if (InputManager::GetKeyState(VK_UP))
		transform->position.y -= moveSpeed * TimeManager::GetDeltaTime();
	if (InputManager::GetKeyState(VK_DOWN))
		transform->position.y += moveSpeed * TimeManager::GetDeltaTime();
	if (InputManager::GetKeyState(VK_LEFT))
		transform->position.x -= moveSpeed * TimeManager::GetDeltaTime();
	if (InputManager::GetKeyState(VK_RIGHT))
		transform->position.x += moveSpeed * TimeManager::GetDeltaTime();
}

Player::~Player() {

}