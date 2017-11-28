#pragma once
#include "NPC.h"

class SweeperBoid : NPC
{
public:
	SweeperBoid();
	~SweeperBoid();
	int workersKidnapped;
	float velocity;

	void Wander();
	void SeekWorker();
};

