#pragma once
#include "GameObject.h"

class Player : GameObject
{
public:
	Player();
	~Player();
	float velocity;
	int workersSaved = 0;
	float shootTimer;
	float shootDelay;

	void Shoot();
	void Movement();
	void Update() override;
};

