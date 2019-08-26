#pragma once
class Player
{
public:
	int x, y;
	char icon;
	Player(int y);
	~Player();
	void Move();
};

