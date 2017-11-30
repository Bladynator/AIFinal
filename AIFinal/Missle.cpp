#include "Missle.h"


Missle::~Missle()
{
}

void Missle::Update() {
	/*xPos += float(yVel*cos((double)orientation*0.0174532925));
	yPos += float(yVel*sin((double)orientation*0.0174532925));*/
	xPos += float(speed*cos((double)(direction - 90)*0.0174532925));
	yPos += float(speed*sin((double)(direction - 90)*0.0174532925));

	shape.setPosition(sf::Vector2f(xPos, yPos));
	shape.setRotation(direction);
}

void Missle::Destroy() {
	isActive = false; // Returns it to the object pool
}
