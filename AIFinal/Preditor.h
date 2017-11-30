#ifndef PREDATOR_H
#define PREDATOR_H

#include "NPC.h"

class Preditor : public NPC
{
public:
	Preditor(sf::String textureName, sf::Vector2f size, sf::Vector2f spawnLocation) : NPC(textureName, size, spawnLocation)
	{

	}
	~Preditor();
	bool hasMissleSpawned;
	int maxPreditors;

	void CreateMissle();
	void CreatePreditor();
};

#endif