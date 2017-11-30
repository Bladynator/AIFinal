#ifndef SWEEPER_BOID_H
#define SWEEPER_BOID_H

#include "NPC.h"

class SweeperBoid : public NPC
{
public:
	SweeperBoid();
	~SweeperBoid();
	int workersKidnapped;
	float velocity;



	void Wander();
	void SeekWorker();
};

#endif