#pragma once
#include "Missle.h"

class InterceptorMissle : public Missle
{
public:
	InterceptorMissle(sf::String textureName, sf::Vector2f size, sf::Vector2f spawnLocation) : Missle(textureName, size, spawnLocation)
	{
		
	}
	~InterceptorMissle();

	float lifeTime;
	float myRotation;
	void SeekPlayer();

	void Destroy();
	void OnCollision(GameObject* other) override;
	void Update() override;

	GameObject* nest;

private:
	sf::Vector2f directionTemp;
};