#include "InterceptorMissle.h"

InterceptorMissle::~InterceptorMissle()
{
}

void InterceptorMissle::Update()
{
	directionTemp.x = player->xPos - xPos;
	directionTemp.y = player->yPos - yPos;

	direction = atan2(directionTemp.y, directionTemp.x);
	direction /= 0.0174532925;
};

void InterceptorMissle::Destroy()
{
	isActive = false;
}
