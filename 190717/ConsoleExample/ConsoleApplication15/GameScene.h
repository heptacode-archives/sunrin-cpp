#pragma once
#include "Player.h"		//Player 클래스 사용
class GameScene
{
public:
	Player* p1;		//플레이어1
	Player* p2;		//플레이어2

	int width;		//결승선까지의 거리
	char winner;	//누가 이겼는지 저장할 변수

	GameScene();
	~GameScene();

	void PrintLine();		//결승선 그리는 함수
	void CountDown();		//카운트다운
	void PlayGame();		//게임을 실행할 함수
	void Ending();			//엔딩을 그려줄 함수
};

