#pragma once
#include "NPC.h"

class Worker : public NPC
{
public:
	Worker(sf::String textureName, sf::Vector2f size, sf::Vector2f spawnLocation) : NPC(textureName, size, spawnLocation)
	{

	}
	~Worker();

	float velocity;
	void Wander();
};