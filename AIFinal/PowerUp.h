#pragma once
#include "GameObject.h"
#include "Player.h"

class PowerUp : public GameObject
{
public:
	PowerUp(sf::String textureName, sf::Vector2f size, sf::Vector2f spawnLocation) : GameObject(textureName, size, spawnLocation)
	{

	}
	~PowerUp();
	void OnCollision(GameObject* other) override;

	float speedIncrease = 0.00005f;
};

