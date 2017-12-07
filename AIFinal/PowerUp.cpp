#include "PowerUp.h"



PowerUp::~PowerUp()
{
}

void PowerUp::OnCollision(GameObject* other)
{
	if (typeid(*other) == typeid(Player))
	{
		dynamic_cast<Player*>(other)->velocityIncreasePlayer += speedIncrease;
		PowerUp::~PowerUp();
	}
}
