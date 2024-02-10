#include <SFML/Graphics.hpp>

int main()
{
    // create the game window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Platformer Game");

    // create the player character
    sf::RectangleShape player(sf::Vector2f(50, 50));
    player.setFillColor(sf::Color::Red);
    player.setPosition(sf::Vector2f(400, 500));

    // create the game loop
    while (window.isOpen())
    {
        // process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        // handle player input
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            player.move(sf::Vector2f(-5, 0));
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            player.move(sf::Vector2f(5, 0));
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
        {
            player.move(sf::Vector2f(0, -10));
        }

        // apply gravity to the player
        player.move(sf::Vector2f(0, 1));

        // draw the game world
        window.clear(sf::Color::White);
        window.draw(player);
        window.display();
    }

    return 0;
}
