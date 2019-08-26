#pragma once
class GameScene
{
public:
	Player* p1; // 플레이어 1
	Player* p2; // 플레이어 2

	int width; // 골인 지점까지의 길이

	GameScene();
	~GameScene();

	void PrintLine(); // 결승 지점 라인 그리는 함수
	void CountDown(); // 카운트다운
	void PlayGame(); // 게임이 실행될 함수
	void Ending(); // 엔딩 그림
};

