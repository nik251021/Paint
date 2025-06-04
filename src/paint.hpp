#include <SFML/Graphics.hpp>

class paint
{
private:
    std::vector<std::vector<int>> tile;
    std::vector<std::vector<int>> drawabletile;
    int SizeXT;
    int SizeYT;
public:
    paint(int sizeX, int sizeY);
    void draw(sf::RenderWindow& window);
    void render(sf::RenderWindow& window);
};