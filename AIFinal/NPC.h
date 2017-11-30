#ifndef NPC_H
#define NPC_H
#include "GameObject.h"

class NPC : public GameObject
{
public:
	NPC();
	~NPC();

	int health;
	bool isDead;

	virtual void Update();
	virtual void Die();
};


#endif // !NPC_H

