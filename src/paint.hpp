#include <SFML/Graphics.hpp>

class paint
{
private:
    std::vector<std::vector<int>> tile;
public:
    paint(int sizeX, int sizeY);
    void draw();
    void render();
};