#include<iostream>
#include "MainScene.h"

void func();

int main(){
	MainScene m;
	m.PrintTitle(); // Ÿ��Ʋ ���
	m.SelectCharacter(); // ĳ���� ��ȣ ����
	m.game.PrintLine(); // �� �׸���
	m.game.CountDown();
	m.game.PlayGame();
	m.game.Ending(); 
	return 0;
}