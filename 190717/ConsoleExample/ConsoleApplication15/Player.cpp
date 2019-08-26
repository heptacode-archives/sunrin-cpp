#include "Player.h"
#include "ConsoleFunctions.h"
#include <iostream>


Player::Player(int y)
{
	this->x = 0;		//0으로 초기화
	this->y = y;		//y로 초기화
}


Player::~Player()
{
}


void Player::Move()
{
	int oldx = x;	//이전 위치 저장
	x += 1;			//이동
	gotoxy(oldx, y);		//원래 위치에
	std::cout << ' ';		//공백 출력
	gotoxy(x, y);			//이동한 위치에
	std::cout << icon;		//아이콘 출력
}