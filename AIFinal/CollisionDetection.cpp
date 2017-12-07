#include "CollisionDetection.h"


CollisionDetection::CollisionDetection()
{
}


CollisionDetection::~CollisionDetection()
{
}

void CollisionDetection::Update(std::vector<GameObject*> allObjects)
{
	for (unsigned int i = 0; i < allObjects.size(); i++)
	{
		if (allObjects[i]->isActive)
		{
			for (unsigned int p = 0; p < allObjects.size(); p++)
			{
				if (i == p)
					continue;
				if (allObjects[p]->isActive)
				{
					BoxTest(allObjects[i], allObjects[p]);
				}
			}
		}
	}
}

void CollisionDetection::BoxTest(GameObject* object1, GameObject* object2)
{
	if (object1->xPos + object1->width < object2->xPos || object1->xPos > object2->xPos + object2->width) return;
	if (object1->yPos + object1->height < object2->yPos || object1->yPos > object2->yPos + object2->width) return;

	object1->OnCollision(object2);
	object2->OnCollision(object1);
}