#include "GameScene.h"
#include "ConsoleFunctions.h"

GameScene::GameScene()
{
	this->p1 = new Player(6);		//6��° �ٿ��� ����
	this->p2 = new Player(7);		//7��° �ٿ��� ����
	this->width = 20;
}


GameScene::~GameScene()
{
	delete p1;
	delete p2;
}


void GameScene::PrintLine()
{
	//������ ����� �Լ�
	system("cls");
	gotoxy(0, p1->y);
	std::cout << p1->icon;	//�÷��̾�1 �׸�
	gotoxy(0, p2->y);
	std::cout << p2->icon;	//�÷��̾�2 �׸�

	for (int i = 0; i < 20; i++)
	{
		gotoxy(width, i);
		std::cout << "#";			//��¼��� �׸�
	}

}

void GameScene::PlayGame()
{
	while (true)
	{
		if (_kbhit())
		{
			char key = _getch();
			if (key == p1->icon)
			{
				p1->Move(); //�����̱�
			}
			if (key == p2->icon)
			{
				p2->Move(); //�����̱�
			}
		}
		if (width <= p1->x)
		{
			winner = p1->icon;
			break;
		}
		if (width <= p2->x)
		{
			winner = p2->icon;
			break;
		}
	}
}

void GameScene::Ending()
{
	system("cls");
	gotoxy(6, 6);
	std::cout << "Winner is " << winner << "!!!!!!";
	Sleep(1000);		//��� ����

}

void GameScene::CountDown()
{
	for (int i = 3; i > 0; i--)
	{
		gotoxy(0, 0);
		std::cout << i;
		Sleep(1000);			//1�� ���
	}
	while (_kbhit())
	{
		_getch();			//���� ����
	}

	gotoxy(0, 0);
	std::cout << "Start!!!!!";
}