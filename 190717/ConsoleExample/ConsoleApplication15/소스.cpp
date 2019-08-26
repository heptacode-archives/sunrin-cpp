#include <iostream>
#include "MainScene.h"

int main()
{
	MainScene m;
	m.PrintTitle();			//타이틀 그림
	m.SelectCharacter();	//캐릭터 선택
	m.game.PrintLine();		//결승선 그림
	m.game.CountDown();		//카운트 다운
	m.game.PlayGame();		//게임 진행
	m.game.Ending();		//엔딩 출력

	return 0;
}