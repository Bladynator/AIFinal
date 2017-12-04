#include "Nest.h"
#include "Preditor.h"

Nest::~Nest()
{
}

void Nest::Update()
{
	if (!hasAliveMissle)
	{
		GameObject* player = GameController::GetInstance()->GetPlayer();
		float distance = sqrt(
			((player->xPos - xPos) * 2) +
			((player->yPos - yPos) * 2));

		if (distance < 1500) // TODO: based on resolution?
		{
			Shoot();
		}
	}
	if (currentPreditors < maxPreditors)
	{
		MakePreditor();
		currentPreditors++;
	}
}

void Nest::MakePreditor()
{
	Preditor* temp = new Preditor("Preditor.png", sf::Vector2f(75, 75), sf::Vector2f(xPos, yPos));
	temp->nest = this;
}

void Nest::Shoot()
{
	InterceptorMissle* temp = GameController::GetInstance()->GetPool()->GetInterceptorMissle(sf::Vector2f(xPos, yPos), 0);
	temp->nest = this;
	hasAliveMissle = true;
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