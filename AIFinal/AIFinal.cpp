#include "AIFinal.h"

#include "SFML\Graphics.hpp"
#include "SFML\Main.hpp"
#include "SFML\System.hpp"
#include "SFML\Window.hpp"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "SpaceSavers");
	GameController * gameController = new GameController();

	// Main Camera
	sf::View followPlayer;
	followPlayer.setCenter(400, 300);
	followPlayer.setSize(800, 600);

	// Minimap Camera
	sf::View minimapView;
	minimapView.setCenter(1200, 900);
	minimapView.setSize(2400, 1800);

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

		// Main Update Loop
		gameController->Update();
		window.clear(sf::Color::Black);

		// Minimap/radar
		minimapView.setViewport(sf::FloatRect(0.75f, 0, 0.25f, 0.25f));
		window.setView(minimapView);
		gameController->Draw(window);

		// Camera follow player
		window.setView(followPlayer);
		followPlayer.setCenter(gameController->GetPlayer()->xPos, gameController->GetPlayer()->yPos);

		// Main Draw loop
		gameController->Draw(window);
		window.display();
	}
	
    return 0;
}