#include "paint.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

paint::paint(int sizeX, int sizeY) {
    SizeXT = sizeX;
    SizeYT = sizeY;
    tile.resize(SizeYT, std::vector<int>(SizeXT, 0));
}


void paint::draw(sf::RenderWindow& window) {
    int mouseX = sf::Mouse::getPosition(window).x;
    int mouseY = sf::Mouse::getPosition(window).y;

    if (mouseX >= 0 && mouseX < SizeXT && mouseY >= 0 && mouseY < SizeYT) {
        tile[mouseY][mouseX] = 1;
    }
}
void paint::render(sf::RenderWindow& window) {
    for (int y = 0; y < SizeYT; ++y) {
        for (int x = 0; x < SizeXT; ++x) {
            if (tile[y][x] == 1) {
                sf::RectangleShape pixel(sf::Vector2f(4, 4));
                pixel.setPosition({x, y});
                pixel.setFillColor(sf::Color::White);
                window.draw(pixel);
            }
        }
    }
}
