#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H
#include <iostream>
#include "SFML\Graphics.hpp"

class GameObject
{
public:
	GameObject();
	~GameObject();
	bool isActive = true;
	virtual void Update();
	virtual void Draw(sf::RenderWindow &window);
	virtual void HandleEvent();
	virtual void OnCollision(GameObject other);
	sf::Texture texture;
	sf::RectangleShape shape;
};

#endif // !GAME_OBJECT_H