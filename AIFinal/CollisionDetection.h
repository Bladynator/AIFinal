#pragma once
#include "GameObject.h"

class CollisionDetection
{
public:
	CollisionDetection();
	~CollisionDetection();
	const float PI;

	void CircleTest(GameObject object1, GameObject object2);
	void BoxTest(GameObject object1, GameObject object2);
	void CircleBoxTest(GameObject object1, GameObject object2);
};

