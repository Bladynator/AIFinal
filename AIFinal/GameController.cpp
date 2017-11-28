#include "stdafx.h"
#include "GameController.h"
#include "CollisionDetection.h"
#include "GameWorld.h"

GameController::GameController()
{
	// make collision object
	// make gameworld
}


GameController::~GameController()
{
}

void GameController::Update()
{
	for (int i = 0; i < allObjects.size(); i++)
	{
		if (allObjects[i].isActive)
		{
			allObjects[i].Update();
		}
	}

	// check all Collisions


	// update/scroll gameworld
	
}

void GameController::Draw()
{
	for (int i = 0; i < allObjects.size(); i++)
	{
		if (allObjects[i].isActive)
		{
			allObjects[i].Draw();
		}
	}
}
