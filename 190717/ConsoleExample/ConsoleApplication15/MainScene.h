#pragma once
#include "GameScene.h"		//게임씬 클래스 사용
class MainScene
{
public:
	MainScene();
	~MainScene();

	GameScene game;			//게임 장면 구조체

	void PrintTitle();		//타이틀 출력
	void SelectCharacter();	//플레이어 기호 입력
};

