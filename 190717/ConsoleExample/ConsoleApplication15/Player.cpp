#include "Player.h"
#include "ConsoleFunctions.h"
#include <iostream>


Player::Player(int y)
{
	this->x = 0;		//0���� �ʱ�ȭ
	this->y = y;		//y�� �ʱ�ȭ
}


Player::~Player()
{
}


void Player::Move()
{
	int oldx = x;	//���� ��ġ ����
	x += 1;			//�̵�
	gotoxy(oldx, y);		//���� ��ġ��
	std::cout << ' ';		//���� ���
	gotoxy(x, y);			//�̵��� ��ġ��
	std::cout << icon;		//������ ���
}