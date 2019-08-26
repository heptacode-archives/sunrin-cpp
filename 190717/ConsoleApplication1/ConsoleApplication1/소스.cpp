#include<iostream>
#include "MainScene.h"

void func();

int main(){
	MainScene m;
	m.PrintTitle(); // 타이틀 출력
	m.SelectCharacter(); // 캐릭터 기호 선택
	m.game.PrintLine(); // 선 그리기
	m.game.CountDown();
	m.game.PlayGame();
	m.game.Ending(); 
	return 0;
}