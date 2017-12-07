#include "GameController.h"

GameController* GameController::instance;
ObjectPool* GameController::objectPool;
GameObject* GameController::player;
CollisionDetection* GameController::collision;

GameController::GameController()
{
	// Make collision object
	collision = new CollisionDetection();

	// TODO: make gameworld
	instance = this;
	// Make Player
	player = new Player("ship.png", sf::Vector2f(75,50), sf::Vector2f(50,50));
	objectPool = new ObjectPool();

	// Make Nests
	new Nest("Nest.png", sf::Vector2f(50, 50), sf::Vector2f(300, 300));

	// Place PowerUps
	new PowerUp("PowerUp.png", sf::Vector2f(30, 30), sf::Vector2f(500, 500));
	new PowerUp("PowerUp.png", sf::Vector2f(30, 30), sf::Vector2f(800, 800));
	new PowerUp("PowerUp.png", sf::Vector2f(30, 30), sf::Vector2f(400, 1000));
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

	// Check all Collisions
	collision->Update(allObjects);
	
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
