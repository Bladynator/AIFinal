#pragma once
#include <iostream>
#include <vector>
#include <list>
#include "GameObject.h"

using namespace std;

class GameController
{
public:
	GameController();
	~GameController();
	vector<GameObject> &allObjects = vector<GameObject>();
	static GameController* GetInstance()
	{
		if (!instance)
			instance = new GameController();
		return instance;
	}
	void Update();
	void Draw();

private:
	static GameController* instance;
	static GameWorld* world;
	static CollisionDetection* collision;
};