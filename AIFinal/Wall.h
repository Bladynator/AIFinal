#pragma once
#include "GameObject.h"

class Wall : public GameObject
{
public:
	Wall(sf::String textureName, sf::Vector2f size, sf::Vector2f spawnLocation) : GameObject(textureName, size, spawnLocation)
	{

	}
	~Wall();
};


