#pragma once
#include "GameObject.h"

class NPC : GameObject
{
public:
	NPC();
	~NPC();

	int health;
	bool isDead;

	void Update() override;
	void Die();
};

