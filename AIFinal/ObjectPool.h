#ifndef OBJECT_POOL_H
#define OBJECT_POOL_H
#include <vector>
#include "InterceptorMissle.h"
#include "PlayerMissle.h"

class ObjectPool
{
public:
	ObjectPool();
	~ObjectPool();
	std::vector<InterceptorMissle*> allInterceptors = std::vector<InterceptorMissle*>();
	std::vector<PlayerMissle*> allOPlayerMissles = std::vector<PlayerMissle*>();
	InterceptorMissle* GetInterceptorMissle(sf::Vector2f location);
	PlayerMissle* GetPlayerMissle(sf::Vector2f location);

private:
	int amountToCreate = 20;
};

#endif // !OBJECT_POOL_H