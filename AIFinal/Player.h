#ifndef PLAYER_H
#define PLAYER_H

#include "GameObject.h"

class Player : public GameObject
{
public:
	Player(sf::String textureName, sf::Vector2f size, sf::Vector2f spawnLocation) : GameObject(textureName, size, spawnLocation)
	{
		
	}
	~Player();
	float velocity;
	int workersSaved = 0;
	float shootTimer;
	float shootDelay;

	void Shoot();
	void Movement();
	void Update() override;

	//sf::Vector2f position = sf::Vector2f(0, 0);
	float xPos = 0;
	float yPos = 0;
	float xVel = 0;
	float yVel = 0;
	float orientation = 0;
	//sf::Vector2f velocity = sf::Vector2f(0, 0);
	float rotation = 0;
	const float maxSpeed = 0.3f;
	const float maxRotation = 0.05f;
	const float velocityIncreasePlayer = 0.0002f;
	const float rotationIncreasePlayer = 0.0002f;

private:
	
};

#endif // !PLAYER_H


