#include "Player.h"



Player::~Player()
{
}

void Player::Shoot() {
	
}

void Player::Movement() {
	// Move Ship
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		yVel += -velocityIncreasePlayer;
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		yVel += velocityIncreasePlayer;
	if (yVel > maxSpeed)
		yVel = maxSpeed;
	else if (yVel < -maxSpeed)
		yVel = -maxSpeed;

	// Rotate Ship
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		rotation += -rotationIncreasePlayer;
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		rotation += rotationIncreasePlayer;
	if (rotation > maxRotation)
		rotation = maxRotation;
	else if (rotation < -maxRotation)
		rotation = -maxRotation;
	orientation += rotation;

	// Calculate position based on rotation
	xPos += float(yVel*cos((double)orientation*0.0174532925));
	yPos += float(yVel*sin((double)orientation*0.0174532925));

	// Set new position and rotation
	shape.setPosition(sf::Vector2f(xPos, yPos));
	shape.setRotation(orientation);
}

void Player::Update() {
	Movement();
}