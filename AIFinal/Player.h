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
	const float maxSpeed = 0.20f;
	const float maxRotation = 0.03f;
	float velocityIncreasePlayer = 0.00015f;
	const float rotationIncreasePlayer = 0.0002f;

	bool keyIsPressed = false;

private:
	
};


