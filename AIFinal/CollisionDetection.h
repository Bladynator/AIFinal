#pragma once
#include "GameObject.h"

class CollisionDetection
{
public:
	CollisionDetection();
	~CollisionDetection();
	const double PI = 3.14159265359;

	void Update(std::vector<GameObject*> allObjects);

	void CircleTest(GameObject object1, GameObject object2);
	void BoxTest(GameObject* object1, GameObject* object2);
	void CircleBoxTest(GameObject object1, GameObject object2);
};





