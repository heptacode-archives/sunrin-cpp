#include <iostream>
#include "MainScene.h"

int main()
{
	MainScene m;
	m.PrintTitle();			//Ÿ��Ʋ �׸�
	m.SelectCharacter();	//ĳ���� ����
	m.game.PrintLine();		//��¼� �׸�
	m.game.CountDown();		//ī��Ʈ �ٿ�
	m.game.PlayGame();		//���� ����
	m.game.Ending();		//���� ���

	return 0;
}