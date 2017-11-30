#ifndef INTERCEPTOR_MISSLE_H
#define INTERCEPTOR_MISSLE_H
#include "Missle.h"

class InterceptorMissle : public Missle
{
public:
	InterceptorMissle(sf::String textureName, sf::Vector2f size, sf::Vector2f spawnLocation) : Missle(textureName, size, spawnLocation)
	{

	}
	~InterceptorMissle();

	float lifeTime;
	void SeekPlayer();
};

#endif // !INTERCEPTOR_MISSLE_H