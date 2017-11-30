#ifndef WALL_H
#define WALL_H
#include "GameObject.h"

class Wall : public GameObject
{
public:
	Wall(sf::String textureName, sf::Vector2f size, sf::Vector2f spawnLocation) : GameObject(textureName, size, spawnLocation)
	{

	}
	~Wall();
};



#endif // !WALL_H


