#pragma once
#include "Component.h"
#include "ResourceManager.h"
#include "Transform.h"

//�������� ���õ� ���� �� ��ü
class Renderer :
	public Component
{
public:
	Renderer();
	Renderer(Sprite* startSprite, float alpha = 1.0f);
private:
	Sprite* currentSprite;	//���� ǥ���� ��������Ʈ�� ����
	float alpha;
	bool initialized;		//��������Ʈ�� �ִ���
	int width, height;

public:
	bool GetInitialized();
	int GetWidth();
	int GetHeight();
	virtual void Update() {}
	void Render(ID2D1HwndRenderTarget& renderTarget, Transform& transform);
};

