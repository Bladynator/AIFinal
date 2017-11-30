#include "ObjectPool.h"


ObjectPool::ObjectPool()
{
	for (unsigned int i = 0; i < amountToCreate; i++)
	{
		InterceptorMissle* tempInter = new InterceptorMissle("intMis.png", sf::Vector2f(10,10), sf::Vector2f(0,0));
		tempInter->isActive = false;
		allInterceptors.insert(allInterceptors.begin(), dynamic_cast<InterceptorMissle*>(tempInter));

		PlayerMissle* tempMissle = new PlayerMissle("plaMis.jpg", sf::Vector2f(10, 10), sf::Vector2f(0, 0));
		tempMissle->isActive = false;
		allOPlayerMissles.insert(allOPlayerMissles.begin(), dynamic_cast<PlayerMissle*>(tempMissle));
	}
}


ObjectPool::~ObjectPool()
{
}

InterceptorMissle* ObjectPool::GetInterceptorMissle(sf::Vector2f location)
{
	for (unsigned int i = 0; i < allInterceptors.size(); i++)
	{
		if (allInterceptors[i]->isActive)
		{
			allInterceptors[i]->shape.setPosition(location);
			return allInterceptors[i];
		}
	}

	return nullptr;
}

PlayerMissle* ObjectPool::GetPlayerMissle(sf::Vector2f location)
{
	for (unsigned int i = 0; i < allOPlayerMissles.size(); i++)
	{
		if (allOPlayerMissles[i]->isActive)
		{
			allOPlayerMissles[i]->shape.setPosition(location);
			return allOPlayerMissles[i];
		}
	}

	return nullptr;
}
