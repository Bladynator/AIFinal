#ifndef MISSLE_H
#define MISSLE_H
#include "GameObject.h"

class Missle : public GameObject
{
public:
	Missle(sf::String textureName, sf::Vector2f size, sf::Vector2f spawnLocation) : GameObject(textureName, size, spawnLocation)
	{

	}
	~Missle();
	float velocity;

	void Destroy();
	void Update();
};

#endif // !MISSLE_H