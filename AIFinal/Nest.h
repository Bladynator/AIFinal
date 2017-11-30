#ifndef NEST_H
#define NEST_H
#include "NPC.h"

class Nest : public NPC
{
public:
	Nest(sf::String textureName, sf::Vector2f size, sf::Vector2f spawnLocation) : NPC(textureName, size, spawnLocation)
	{

	}
	~Nest();
};

#endif // !NEST_H



