#pragma once
#include "GameObject.h"
#include "GameController.h"
#include "PlayerMissle.h"

class Player : public GameObject
{
public:
	Player(sf::String textureName, sf::Vector2f size, sf::Vector2f spawnLocation) : GameObject(textureName, size, spawnLocation)
	{
		
	}
	Player() {};
	~Player();
	float velocity;
	int workersSaved = 0;
	float shootTimer;
	float shootDelay;
	int hp = 5;

	void Shoot();
	void Movement();
	void Update() override;
	void OnCollision(GameObject* other) override;
	
	float xVel = 0;
	float yVel = 0;
	float orientation = 0;
	float rotation = 0;
	const float maxSpeed = 0.15f;
	const float maxRotation = 0.02f;
	float velocityIncreasePlayer = 0.0001f;
	const float rotationIncreasePlayer = 0.0001f;

	bool keyIsPressed = false;

private:
	
};


