#pragma once
#include "NPC.h"
#include "GameController.h"

class Nest : public NPC
{
public:
	Nest(sf::String textureName, sf::Vector2f size, sf::Vector2f spawnLocation) : NPC(textureName, size, spawnLocation)
	{

	}
	~Nest();
	void Update() override;
	void Shoot();
	void MakePreditor();
	bool hasAliveMissle = false;
	int hp = 4;
	int currentPreditors = 0;

	void OnCollision(GameObject* other) override;

private:
	int maxPreditors = 5;
};



