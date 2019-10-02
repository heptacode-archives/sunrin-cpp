#pragma once
#include "Scene.h"
#include "Player.h"


class GameScene : public Scene {
public:
	GameScene();
	~GameScene();

	GameObject* background;
	Player* player;
	virtual void Initialize();
};

