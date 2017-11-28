#include "stdafx.h"
#include "GameController.h"


GameController::GameController()
{
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
