#include "MainScene.h"
#include "ConsoleFunctions.h"


MainScene::MainScene()
{
}


MainScene::~MainScene()
{
}


void MainScene::PrintTitle()
{
	system("cls");				//화면을 지울겁니다.
	gotoxy(0, 0);				//0,0으로 이동합니다.
	std::cout << "Racing Game";	//타이틀 출력
}

void MainScene::SelectCharacter()
{
	gotoxy(6, 6);							//6,6으로 이동
	std::cout << "Select Player1's Icon";	//입력 받기
	std::cin >> game.p1->icon;				//플레이어1의 아이콘 등록

	gotoxy(6, 7);							//6,7로 이동
	std::cout << "Select Player2's Icon";	//입력 받기
	std::cin >> game.p2->icon;				//플레이어2의 아이콘 등록
}