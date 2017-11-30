#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H
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

#endif // !GAME_OBJECT_H