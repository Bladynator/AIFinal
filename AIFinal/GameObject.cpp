#include "GameObject.h"
#include "GameController.h"

GameObject::GameObject()
{

	//GameController::GetInstance()->allObjects.push_back(this);
	GameController::GetInstance()->allObjects.insert(GameController::GetInstance()->allObjects.begin(), dynamic_cast<GameObject*>(this));
}


GameObject::~GameObject()
{
	
}

void GameObject::Update() {

}

void GameObject::Draw(sf::RenderWindow &window) {
	window.draw(shape);
}

void GameObject::HandleEvent() {

}

void GameObject::OnCollision(GameObject other) {

}