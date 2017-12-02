#pragma once
#include "NPC.h"

class SweeperBoid : public NPC
{
public:
	SweeperBoid(sf::String textureName, sf::Vector2f size, sf::Vector2f spawnLocation) : NPC(textureName, size, spawnLocation)
	{

	}
	~SweeperBoid();
	int workersKidnapped;
	float velocity;



	void Wander();
	void SeekWorker();
};