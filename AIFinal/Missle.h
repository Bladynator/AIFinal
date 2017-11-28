#pragma once
#include "GameObject.h"

class Missle : GameObject
{
public:
	Missle();
	~Missle();
	float velocity;

	void Destroy();
	void Update() override;
};

