#pragma once
#include "NPC.h"

class Worker : NPC
{
public:
	Worker();
	~Worker();

	float velocity;
	void Wander();
};

