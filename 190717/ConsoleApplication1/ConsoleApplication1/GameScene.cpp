#include "GameScene.h"
#include "ConsoleFunctions.h"


GameScene::GameScene()
{
	this->width = 20;
	this->p1 = new Player(6);
	this->p2 = new Player(7);
}


GameScene::~GameScene()
{
	delete p1;
	delete p2;
}

void GameScene::PrintLine(){
	// 라인 출력
	system("cls");
	gotoxy(0, p1->y);
	std::cout << p1->icon;
	gotoxy(0, p2->y);
	std::cout << p2->icon;
	for (int i = 0; i < 20; i++){
		gotoxy(width, i);
		std::cout << "#";
	}
}

void GameScene::PlayGame(){
	while (true){
		if (_kbhit()){
			char key = _getch();
			if (key == p1->icon){
				// 플레이어 1 이동
				p1->Move();
			}
			else if (key == p2->icon){
				// 플레이어 2 이동
				p2->Move();
			}
		}
	}
}