#pragma once
#include "GameObject.h"
#include "ResourceManager.h"
class Scene
{
public:
	Scene();
	~Scene();
	std::list<GameObject*> gameObjectList;
	std::list<GameObject*> renderableList;
	ResourceManager* resourceManager;

	void Initialize();
	void Update();
	void Render();
	GameObject* PushBackGameObject(GameObject* g);
};

