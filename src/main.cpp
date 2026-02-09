#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window( sf::VideoMode( { 1000, 1000 } ), "Testing Window" );
	sf::RectangleShape topPaddle;
	topPaddle.setSize({120.f, 20.f});
	sf::RectangleShape bottomPaddle;
	bottomPaddle.setSize({120.f, 20.f});

	topPaddle.setFillColor(sf::Color::White);
	bottomPaddle.setFillColor(sf::Color::White);

	sf::Vector2u windowSize = window.getSize();

	topPaddle.setPosition((windowSize.x - topPaddle.getSize().x) / 2.f, 10.f);
	bottomPaddle.setPosition((windowSize.x - bottomPaddle.getSize().x) / 2.f, windowSize.y - topPaddle.getSize().y - 10.f);





	while ( window.isOpen() )
	{
		while ( const std::optional event = window.pollEvent() )
		{
			if ( event->is<sf::Event::Closed>() )
				window.close();
		}

		window.clear();
		window.display();
	}
}
