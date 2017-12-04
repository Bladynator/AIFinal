#include "Missle.h"


Missle::~Missle()
{
}

void Missle::Update() 
{

	xPos += float(speed*cos((double)(direction - 90)*0.0174532925));
	yPos += float(speed*sin((double)(direction - 90)*0.0174532925));

	shape.setPosition(sf::Vector2f(xPos, yPos));
	shape.setRotation(direction);
}

void Missle::Destroy() 
{
	isActive = false; // Returns it to the object pool
}
