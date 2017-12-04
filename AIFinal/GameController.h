#pragma once
#include <iostream>
#include <vector>
#include <list>
#include "GameObject.h"
#include "GameWorld.h"
#include "CollisionDetection.h"
#include "ObjectPool.h"
#include "Player.h"
#include "Nest.h"

class GameController
{
public:
	GameController();
	std::vector<GameObject*> allObjects = std::vector<GameObject*>();
	static GameController* GetInstance()
	{
		/*if (!instance)
			instance = new GameController();*/
		return instance;
	};
	static GameWorld* GetWorld()
	{
		return world;
	};
	static ObjectPool* GetPool()
	{
		return objectPool;
	};
	static GameObject* GetPlayer()
	{
		return player;
	};
	void Update();
	void Draw(sf::RenderWindow &window);

private:
	
	static GameController* instance;
	static GameWorld* world;
	static CollisionDetection* collision;
	static ObjectPool* objectPool;
	static GameObject* player;
};

