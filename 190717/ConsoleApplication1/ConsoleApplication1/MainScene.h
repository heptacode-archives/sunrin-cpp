#pragma once
#include "GameScene.h"

class MainScene{
public:
	MainScene();
	~MainScene();

	GameScene game;

	void PrintTitle(); // �ΰ� ���
	void SelectCharacter(); // ĳ���� ����
};