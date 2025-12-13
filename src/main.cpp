#include <SFML/Graphics.hpp>
#include <iostream>
#include <SFML/Window.hpp>

int main()
{

    // create the window
    sf::RenderWindow window(sf::VideoMode({800, 600}), "My window");
    sf::CircleShape ball(75);
    ball.setFillColor(sf::Color(255,165,0));
    
    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        while (const std::optional event = window.pollEvent())
        {
            // "close requested" event: we close the window
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...
        window.draw(ball);

        // end the current frame
        window.display();
        
    }





    // auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "CMake SFML Project");
    // window.setFramerateLimit(144);

    // while (window.isOpen())
    // {
    //     while (const std::optional event = window.pollEvent())
    //     {
    //         if (event->is<sf::Event::Closed>())
    //         {
    //             window.close();
    //         }
    //     }

    //     window.clear();
    //     window.display();
    // }

 
}