#pragma once
#include "GameScene.h"		//���Ӿ� Ŭ���� ���
class MainScene
{
public:
	MainScene();
	~MainScene();

	GameScene game;			//���� ��� ����ü

	void PrintTitle();		//Ÿ��Ʋ ���
	void SelectCharacter();	//�÷��̾� ��ȣ �Է�
};

