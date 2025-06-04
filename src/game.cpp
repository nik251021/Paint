#include "game.hpp"
#include <iostream>

game::game() 
    : window(sf::VideoMode({450, 450}), "Paint"),
    paint(450, 450)
{
    window.setFramerateLimit(30);
}


void game::run() {
    while (window.isOpen()) {
        handleEvents();
        update();
        render();
    }
}

void game::handleEvents() {
    while (std::optional<sf::Event> event = window.pollEvent()){
        if (event->is<sf::Event::Closed>()) {
            window.close();
        }
    }
}

void game::update() {
    dt = dtimer.restart().asSeconds();

    if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) {
        paint.draw(window);
    } else if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Right)) {
        paint.erase(window);
    }

}

void game::render() {
    window.clear(sf::Color::Black);
    paint.render(window);
    window.display();
}