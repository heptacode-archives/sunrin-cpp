#pragma once
#include "Player.h"		//Player Ŭ���� ���
class GameScene
{
public:
	Player* p1;		//�÷��̾�1
	Player* p2;		//�÷��̾�2

	int width;		//��¼������� �Ÿ�
	char winner;	//���� �̰���� ������ ����

	GameScene();
	~GameScene();

	void PrintLine();		//��¼� �׸��� �Լ�
	void CountDown();		//ī��Ʈ�ٿ�
	void PlayGame();		//������ ������ �Լ�
	void Ending();			//������ �׷��� �Լ�
};

