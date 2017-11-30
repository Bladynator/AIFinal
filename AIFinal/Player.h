#ifndef PLAYER_H
#define PLAYER_H

#include "GameObject.h"

class Player : public GameObject
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

#endif // !PLAYER_H


