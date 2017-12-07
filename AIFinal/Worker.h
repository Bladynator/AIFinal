#ifndef WORKER_H
#define WORKER_H
#include "NPC.h"

class Worker : public NPC
{
private:
	float xPos = 0;
	float yPos = 0;
	float xVel = 0.03f;
	float yVel = 0.03f;

	float randomXPos = rand() % 500;
	float randomYPos = rand() % 500;

	sf::Vector2f newPosition;
	float orientation = 0;
	float rotation = 0.005f;


	bool HasReachedDestination();

public:
	Worker(sf::String textureName, sf::Vector2f size, sf::Vector2f spawnLocation) : NPC(textureName, size, spawnLocation)
	{
		newPosition = sf::Vector2f(randomXPos, randomYPos);
	}

	~Worker();

	
	void Update();
	void Wander();
};

#endif // !WORKER_H