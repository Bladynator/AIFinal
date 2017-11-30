#include "GameObject.h"
#include "GameController.h"

GameObject::GameObject()
{

	GameController::GetInstance()->allObjects.push_back(*this);
}


GameObject::~GameObject()
{
	
}

void GameObject::Update() {

}

void GameObject::Draw() {

}

void GameObject::HandleEvent() {

}

void GameObject::OnCollision(GameObject other) {

}