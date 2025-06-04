#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

#include "paint.hpp"

class game
{
private:
    paint paint;
    void handleEvents();
    void update();
    void render();

    sf::Clock dtimer;
    float dt;

    sf::RenderWindow window;
public:
    game();
    void run();
};