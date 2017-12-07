#pragma once
#include <iostream>
#include "SFML\Graphics.hpp"

class GameObject
{
public:
	GameObject(sf::String textureName, sf::Vector2f size, sf::Vector2f spawnLocation);
	GameObject();
	~GameObject();
	bool isActive = true;
	float xPos = 0;
	float yPos = 0;
	float width = 0;
	float height = 0;
	virtual void Update();
	virtual void Draw(sf::RenderWindow &window);
	virtual void HandleEvent();
	virtual void OnCollision(GameObject* other);
	sf::Texture texture;
	sf::RectangleShape shape;
};
