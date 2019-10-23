#pragma once
#include "stdafx.h"
#include "Renderer.h"

class GameObject
{
public:
	GameObject(Vector2 position = Vector2(), float angle = 0.0f, Vector2 scale = Vector2());
	GameObject(const wchar_t* imagePath, Vector2 position = Vector2(), float angle = 0.0f, Vector2 scale = Vector2(1.0f,1.0f));
	virtual ~GameObject();
private:
	bool isActive;
public:
	std::string name;
	Transform* transform;
	Renderer* renderer;

public:
	virtual void Start() {}				//������Ʈ�� ó�� ������� �� ȣ��
	virtual void Update() {}			//�� �����Ӹ��� ȣ��
	virtual void LateUpdate() {}		//Update�� ȣ��� ���� ȣ��
	virtual void OnDestroy() {}			//������Ʈ�� ������ �� ȣ��

public:
	bool GetActive();
};

