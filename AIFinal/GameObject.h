#pragma once
class GameObject
{
public:
	GameObject();
	~GameObject();
	bool isActive = true;
	virtual void Update();
	virtual void Draw();
	virtual void HandleEvent();
	virtual void OnCollision(GameObject other);
};

