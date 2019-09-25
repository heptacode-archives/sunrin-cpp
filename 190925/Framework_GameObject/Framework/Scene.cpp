#include "Scene.h"
#include "Framework.h"

Scene::Scene() {
	resourceManager = new ResourceManager();
}

Scene::~Scene() {
	for (auto& i : gameObjectList)
		delete i;
	gameObjectList.clear();
	renderableList.clear();
	delete resourceManager;
}

void Scene::Initialize() {
	GameObject* g = PushBackGameObject(new GameObject(L"a.png"));
}
void Scene::Update() {
	for (auto& i : gameObjectList)
		i->Update();
}
void Scene::Render() {
	D2DApp& d2dapp = Framework::GetInstance().GetD2DApp();
	ID2D1HwndRenderTarget& r = d2dapp.GetRenderTarget();

	d2dapp.BeginRender();
	for (auto& i : renderableList)
		i->renderer->Render(r, *i->transform);
	d2dapp.EndRender();
}

GameObject* Scene::PushBackGameObject(GameObject* g) {
	gameObjectList.push_back(g);
	if (g->renderer->GetInitialized())
		renderableList.push_back(g);
	return g;
}