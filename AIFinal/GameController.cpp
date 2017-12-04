#include "GameController.h"



GameController* GameController::instance;
ObjectPool* GameController::objectPool;
Player* GameController::player;

GameController::GameController()
{
	// make collision object
	
	instance = this;
	player = new Player("ship.png", sf::Vector2f(75,50), sf::Vector2f(50,50));
	objectPool = new ObjectPool();

	// make gameworld
	new Nest("Nest.png", sf::Vector2f(50,50), sf::Vector2f(300,300));
}

void GameController::Update()
{
	for (unsigned int i = 0; i < allObjects.size(); i++)
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
	for (unsigned int i = 0; i < allObjects.size(); i++)
	{
		if (allObjects[i]->isActive)
		{
			allObjects[i]->Draw(window);
		}
	}
}
