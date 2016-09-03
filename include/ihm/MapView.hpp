#ifndef MAP_VIEW_HPP
#define MAP_VIEW_HPP

#include <cstdlib>
#include <SFML/Graphics.hpp>
#include <iostream>


class MapView{
  private:
    double **map;

    sf::RenderWindow *window;

    int height, width;

    sf::Texture environment;
    sf::Sprite wall;
    sf::Sprite ground;

  public:
    MapView(int width, int height, double **map);

    ~MapView();

    void displayLoop();

    void close();

    void refresh();

    int loadImage();
};

#endif //MAP_VIEW_HPP
