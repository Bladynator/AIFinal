#pragma once
#include "NPC.h"

class Preditor : NPC
{
public:
	Preditor();
	~Preditor();
	bool hasMissleSpawned;
	int maxPreditors;

	void CreateMissle();
	void CreatePreditor();
};

