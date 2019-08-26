#include "MainScene.h"
#include "ConsoleFunctions.h"

MainScene::MainScene(){}

MainScene::~MainScene(){}

void MainScene::PrintTitle(){
	system("cls");
	gotoxy(0, 0);
	std::cout << "Racing Game";
}

void MainScene::SelectCharacter(){
	gotoxy(6, 6);
	std::cout << "Select Player1's Icon : ";
	std::cin >> game.p1->icon;

	gotoxy(6, 7);
	std::cout << "Select Player2's Icon : ";
	std::cin >> game.p2->icon;
}