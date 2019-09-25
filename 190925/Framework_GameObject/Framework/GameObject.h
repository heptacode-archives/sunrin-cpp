#pragma once
#include "Transform.h"
#include "Renderer.h"

class GameObject
{
public:
	GameObject();
	GameObject(const wchar_t* path);
	~GameObject();
public:
	Transform* transform;
	Renderer* renderer;
	std::string name;

	void Update();
};

