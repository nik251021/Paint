#include "game.hpp"

game::game() 
    : window(sf::VideoMode({800, 600}), "Paint"),
    paint()
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
    std::cout << dt << std::endl;

    if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) {

    }

}

void game::render() {
    window.clear(sf::Color::Black);

    window.display();
}