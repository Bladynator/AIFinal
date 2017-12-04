#include "GameObject.h"
#include "GameController.h"

GameObject::GameObject(sf::String textureName, sf::Vector2f size, sf::Vector2f spawnLocation)
{
	sf::Vector2f rectSize;
	rectSize.x = size.x;
	rectSize.y = size.y;
	shape.setSize(rectSize);
	shape.move(sf::Vector2f(spawnLocation.x, spawnLocation.y));
	if (!texture.loadFromFile(textureName))
		std::cout << "error";
	shape.setTexture(&texture, false);
	shape.setOrigin(shape.getLocalBounds().width / 2, shape.getLocalBounds().height / 2);
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

void GameObject::OnCollision(GameObject* other) {

}