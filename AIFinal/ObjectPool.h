#pragma once
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
	InterceptorMissle* GetInterceptorMissle(sf::Vector2f location, float direction);
	PlayerMissle* GetPlayerMissle(sf::Vector2f location, float direction);

private:
	int amountToCreate = 20;
};