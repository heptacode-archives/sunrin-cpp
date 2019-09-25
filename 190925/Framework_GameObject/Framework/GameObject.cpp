#include "GameObject.h"
#include "WinApp.h"

GameObject::GameObject() {
	transform = new Transform();
	renderer = new Renderer();
}
GameObject::GameObject(const wchar_t* path) {
	transform = new Transform();
	renderer = new Renderer(path);
}
void GameObject::Update() {
	transform->SetPosition(WinApp::mX, WinApp::mY);
}
GameObject::~GameObject() {

}