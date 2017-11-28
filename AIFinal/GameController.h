#pragma once
class GameController
{
public:
	GameController();
	~GameController();
	static GameController* GetInstance()
	{
		if (!instance)
			instance = new GameController();
		return instance;
	}

private:
	static GameController* instance;
};

