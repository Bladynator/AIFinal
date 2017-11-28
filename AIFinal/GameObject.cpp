#include "stdafx.h"
#include "GameObject.h"
#include "GameController.h"

GameObject::GameObject()
{
	GameController::GetInstance()->allObjects.push_back(*this);
}


GameObject::~GameObject()
{
	
}
