#pragma once
#include "GameObject.h"
class Player : public GameObject {
public:
	Player(const wchar_t* path);
	~Player();

	float moveSpeed;		
	virtual void Update();
};

