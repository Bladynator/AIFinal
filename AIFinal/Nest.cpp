#include "Nest.h"


Nest::~Nest()
{
}

void Nest::Update()
{
	//float distance = sqrt(
	//	((player->xPos - xPos) * 2) +
	//	((player->yPos - yPos) * 2));

	//if (distance < 500) // TODO: based on resolution?
	//{
	//	Shoot();
	//}
}

void Nest::Shoot()
{
	GameController::GetInstance()->GetPool()->GetInterceptorMissle(sf::Vector2f(xPos, yPos), 0);
}

void Nest::OnCollision(GameObject* other)
{
	if (typeid(*other) == typeid(PlayerMissle))
	{
		hp -= 1;
		if (hp <= 0)
		{
			Nest::~Nest();
		}
	}
}