#include "AIFinal.h"

#include "SFML\Graphics.hpp"
#include "SFML\Main.hpp"
#include "SFML\System.hpp"
#include "SFML\Window.hpp"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "SpaceSavers");
	GameController * gameController = new GameController();

	while (window.isOpen())
	{
		sf::Event windowEvent;
		while (window.pollEvent(windowEvent))
		{
			if (windowEvent.type == sf::Event::Closed)
			{
				window.close();
			}
		}
		gameController->Update();
		window.clear(sf::Color::Black);
		gameController->Draw(window);
		window.display();
	}
	
    return 0;
}