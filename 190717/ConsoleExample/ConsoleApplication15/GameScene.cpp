#include "GameScene.h"
#include "ConsoleFunctions.h"

GameScene::GameScene()
{
	this->p1 = new Player(6);		//6번째 줄에서 경주
	this->p2 = new Player(7);		//7번째 줄에서 경주
	this->width = 20;
}


GameScene::~GameScene()
{
	delete p1;
	delete p2;
}


void GameScene::PrintLine()
{
	//라인을 출력할 함수
	system("cls");
	gotoxy(0, p1->y);
	std::cout << p1->icon;	//플레이어1 그림
	gotoxy(0, p2->y);
	std::cout << p2->icon;	//플레이어2 그림

	for (int i = 0; i < 20; i++)
	{
		gotoxy(width, i);
		std::cout << "#";			//결승선을 그림
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
				p1->Move(); //움직이기
			}
			if (key == p2->icon)
			{
				p2->Move(); //움직이기
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
	Sleep(1000);		//잠깐 멈춤

}

void GameScene::CountDown()
{
	for (int i = 3; i > 0; i--)
	{
		gotoxy(0, 0);
		std::cout << i;
		Sleep(1000);			//1초 대기
	}
	while (_kbhit())
	{
		_getch();			//버퍼 제거
	}

	gotoxy(0, 0);
	std::cout << "Start!!!!!";
}