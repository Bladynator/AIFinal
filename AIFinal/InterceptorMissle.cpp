#include "InterceptorMissle.h"
#include "GameController.h"

InterceptorMissle::~InterceptorMissle()
{
}

void InterceptorMissle::Update()
{
	
	GameObject* temp = GameController::GetInstance()->GetPlayer();
	directionTemp.x = temp->xPos - xPos;
	directionTemp.y = temp->yPos - yPos;

	direction = atan2(directionTemp.y, directionTemp.x);
	direction /= 0.0174532925;
	direction += 90;

	Missle::Update();
};

void InterceptorMissle::Destroy()
{
	isActive = false;
	dynamic_cast<Nest*>(nest)->hasAliveMissle = false;
}