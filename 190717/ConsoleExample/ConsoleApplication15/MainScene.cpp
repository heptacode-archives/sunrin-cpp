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
	system("cls");				//ȭ���� ����̴ϴ�.
	gotoxy(0, 0);				//0,0���� �̵��մϴ�.
	std::cout << "Racing Game";	//Ÿ��Ʋ ���
}

void MainScene::SelectCharacter()
{
	gotoxy(6, 6);							//6,6���� �̵�
	std::cout << "Select Player1's Icon";	//�Է� �ޱ�
	std::cin >> game.p1->icon;				//�÷��̾�1�� ������ ���

	gotoxy(6, 7);							//6,7�� �̵�
	std::cout << "Select Player2's Icon";	//�Է� �ޱ�
	std::cin >> game.p2->icon;				//�÷��̾�2�� ������ ���
}