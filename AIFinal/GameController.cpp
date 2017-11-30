#include "GameController.h"
#include "CollisionDetection.h"
#include "GameWorld.h"
#include "Player.h"

GameController* GameController::instance;


GameController::GameController()
{
	// make collision object
	// make gameworld
	instance = this;
	Player* player = new Player();
	

}

void GameController::Update()
{
	for (int i = 0; i < allObjects.size(); i++)
	{
		if (allObjects[i]->isActive)
		{
			allObjects[i]->Update();
		}
	}

	// check all Collisions


	// update/scroll gameworld
	
}

void GameController::Draw(sf::RenderWindow &window)
{
	for (int i = 0; i < allObjects.size(); i++)
	{
		if (allObjects[i]->isActive)
		{
			allObjects[i]->Draw(window);
		}
	}
}
