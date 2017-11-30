#ifndef GAME_CONTROLLER_H
#define GAME_CONTROLLER_H
#include <iostream>
#include <vector>
#include <list>
#include "GameObject.h"
#include "GameWorld.h"
#include "CollisionDetection.h"

using namespace std;

class GameController
{
public:
	GameController();
	vector<GameObject*> allObjects = vector<GameObject*>();
	static GameController* GetInstance()
	{
		/*if (!instance)
			instance = new GameController();*/
		return instance;
	}
	void Update();
	void Draw(sf::RenderWindow &window);

private:
	
	static GameController* instance;
	static GameWorld* world;
	static CollisionDetection* collision;

};

#endif // !GAME_CONTROLLER_H

