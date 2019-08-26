#pragma once
#include "GameScene.h"

class MainScene{
public:
	MainScene();
	~MainScene();

	GameScene game;

	void PrintTitle(); // 로고 출력
	void SelectCharacter(); // 캐릭터 선택
};