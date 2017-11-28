#pragma once
class GameObject
{
public:
	GameObject();
	~GameObject();
	bool isActive = true;
	void Update();
	void Draw();
};

