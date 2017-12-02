#pragma once
#include "Missle.h"

class PlayerMissle : public Missle
{
public:
	PlayerMissle(sf::String textureName, sf::Vector2f size, sf::Vector2f spawnLocation) : Missle(textureName, size, spawnLocation)
	{

	}
	~PlayerMissle();
};




