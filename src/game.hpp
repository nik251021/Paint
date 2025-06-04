#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

#include "paint.hpp"

class game
{
private:
    void handleEvents();
    void update();
    void render();
    sf::Clock dtimer;
    float dt;

    sf::RenderWindow window;
    paint paint;
public:
    game();
    void run();
};