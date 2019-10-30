#pragma once
#include "GameObject.h"
#include "Renderer.h"
#include "stdafx.h"
#include "GameObject.h"
#include "ResourceManager.h"

class Scene
{
	friend class Framework;
public:
	Scene();
	virtual ~Scene();
	
private:
	static Scene* currentScene;
	static Scene* nextScene;
	static void SwapScene();

public:
	static void ChangeScene(Scene* nextScene);
	static Scene& GetCurrentScene();

private:
	std::list<GameObject*> gameObjectList;			//��� ���ӿ�����Ʈ ����Ʈ
	std::list<GameObject*> renderableList;			//�׸��� �׷���(����) ������Ʈ�� ����Ʈ
	std::list<GameObject*> destroyedObjectList;		//����ó���� ������Ʈ ����Ʈ
	ResourceManager* resourceManager;				//�̹��� ������ ������ ��ü

public:
	virtual void Initialize() = 0;	//�ʱ�ȭ	(���� ���� �Լ�)
	void Update();					//������Ʈ
	void Render();					//����

public:
	GameObject* PushBackGameObject(GameObject* gameObject);	//���ӿ�����Ʈ Ǫ����
	void Destroy(GameObject* o);							//����ó��

public:
	ResourceManager& GetResourceManager();					//Getter
};

