// Template.cpp : Defines the entry point for the application.
//

#include "Template.h"

int main()
{
    sf::Window window(sf::VideoMode(800, 600), "My window");

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    glm::vec3 test(10, 20, 30);
    std::cout << test.x << " | " << test.y << " | " << test.z << std::endl;

    return 0;
}