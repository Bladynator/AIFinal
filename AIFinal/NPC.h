#ifndef NPC_H
#define NPC_H
#include "GameObject.h"

class NPC : public GameObject
{
public:
	NPC(sf::String textureName, sf::Vector2f size, sf::Vector2f spawnLocation) : GameObject(textureName, size, spawnLocation)
	{

	}
	~NPC();

	int health;
	bool isDead;

	virtual void Update();
	virtual void Die();
};


#endif // !NPC_H

