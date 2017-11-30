#include "Missle.h"


Missle::~Missle()
{
}

void Missle::Update() {

}

void Missle::Destroy() {
	isActive = false; // Returns it to the object pool
}
