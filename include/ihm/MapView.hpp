#ifndef MAP_VIEW_HPP
#define MAP_VIEW_HPP

#include <cstdlib>
#include <SFML/Graphics.hpp>


class MapView{
  private:
    sf::RenderWindow *window;

    int height, width;

    sf::Texture image;
    sf::Sprite sprite;

  public:
    MapView(int width, int height);

    ~MapView();

    void displayLoop();

    void close();

    void refresh();

    int loadImage();
};

#endif //MAP_VIEW_HPP
