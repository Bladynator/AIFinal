#include "ObjectPool.h"


ObjectPool::ObjectPool()
{
	for (unsigned int i = 0; i < amountToCreate; i++)
	{
		InterceptorMissle* tempInter = new InterceptorMissle("intMis.png", sf::Vector2f(20,20), sf::Vector2f(0,0));
		tempInter->isActive = false;
		allInterceptors.insert(allInterceptors.begin(), dynamic_cast<InterceptorMissle*>(tempInter));

		PlayerMissle* tempMissle = new PlayerMissle("plaMis.png", sf::Vector2f(20, 20), sf::Vector2f(0, 0));
		tempMissle->isActive = false;
		allOPlayerMissles.insert(allOPlayerMissles.begin(), dynamic_cast<PlayerMissle*>(tempMissle));
	}
}


ObjectPool::~ObjectPool()
{
}

InterceptorMissle* ObjectPool::GetInterceptorMissle(sf::Vector2f location, float direction)
{
	for (unsigned int i = 0; i < allInterceptors.size(); i++)
	{
		if (!allInterceptors[i]->isActive)
		{
			allInterceptors[i]->isActive = true;
			allInterceptors[i]->shape.setPosition(location);
			allInterceptors[i]->xPos = location.x;
			allInterceptors[i]->yPos = location.y;
			allInterceptors[i]->direction = direction;
			return allInterceptors[i];
		}
	}

	return nullptr;
}

PlayerMissle* ObjectPool::GetPlayerMissle(sf::Vector2f location, float direction)
{
	for (unsigned int i = 0; i < allOPlayerMissles.size(); i++)
	{
		if (!allOPlayerMissles[i]->isActive)
		{
			allOPlayerMissles[i]->isActive = true;
			allOPlayerMissles[i]->shape.setPosition(location);
			allOPlayerMissles[i]->xPos = location.x;
			allOPlayerMissles[i]->yPos = location.y;
			allOPlayerMissles[i]->direction = direction - 90;
			return allOPlayerMissles[i];
		}
	}

	return nullptr;
}
