#ifndef MISSLE_H
#define MISSLE_H
#include "GameObject.h"

class Missle : public GameObject
{
public:
	Missle();
	~Missle();
	float velocity;

	void Destroy();
	void Update();
};

#endif // !MISSLE_H