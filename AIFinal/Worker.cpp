#include "Worker.h"

Worker::~Worker()
{
}


void Worker::Update() {
	if (!HasReachedDestination())
	{
		Wander();

	}
	
	//If collision with the player
	//Then destroy instance of itself


}

/// <summary>
/// The main method for walking around
/// </summary>
void Worker::Wander() {

	if (!HasReachedDestination())
	{
		//Move the Worker towards the target
		if (xPos > randomXPos) {
			xPos += xVel;
		}
		
		if (yPos > randomYPos) {
			yPos += yVel;
		}
		//Rotate the worker
		orientation += rotation;
		//Calculate the position based on the rotation

		//Set the new Position and Rotation
		xPos += float(yVel * cos((double)orientation * 0.0174532925));
		yPos += float(yVel * sin((double)orientation * 0.0174532925));

		//Finally, sets the new position and rotation in the shape
		shape.setPosition(sf::Vector2f(xPos, yPos));
		shape.setRotation(orientation);
		std::cout << xPos << std::endl;
		std::cout << yPos << std::endl;

	}
	else {
		//Setting the new coordinates
		randomXPos = rand() % 100;
		randomYPos = rand() % 100;

	}
}

/// <summary>
/// Determines whether the worker has reached the destination.
/// </summary>
/// <returns>
///   <c>true</c> if the worker has reached destination;
/// </returns>
bool Worker::HasReachedDestination() {
	return (xPos == randomXPos) && (yPos == randomYPos);
}