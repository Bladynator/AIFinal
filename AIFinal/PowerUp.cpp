#include "PowerUp.h"



PowerUp::~PowerUp()
{
	//GameObject::~GameObject();
}

void PowerUp::OnCollision(GameObject* other)
{
	if (typeid(*other) == typeid(Player))
	{
		dynamic_cast<Player*>(other)->velocityIncreasePlayer += speedIncrease;
		isActive = false;
	}
}
