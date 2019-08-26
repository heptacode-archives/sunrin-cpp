#pragma once
class Player
{
public:
	int x;				//가로 위치
	int y;				//세로 위치
	char icon;			//아이콘 저장할 변수
	Player(int y);		//생성자, y값 입력받음
	~Player();
	void Move();		//움직이는 함수
};

