#ifndef WORKER_H
#define WORKER_H
#include "NPC.h"

class Worker : public NPC
{
public:
	Worker();
	~Worker();

	float velocity;
	void Wander();
};

#endif // !WORKER_H