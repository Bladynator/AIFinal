#ifndef PREDATOR_H
#define PREDATOR_H

#include "NPC.h"

class Preditor : public NPC
{
public:
	Preditor();
	~Preditor();
	bool hasMissleSpawned;
	int maxPreditors;

	void CreateMissle();
	void CreatePreditor();
};

#endif