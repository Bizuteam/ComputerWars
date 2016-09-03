#include <ihm/MapView.hpp>
#include <data/map/LocalMap.hpp>

/**
* Map correspondance
*
* 0 = empty
* 1 = ground
* 2 = wall
**/

MapView::MapView(int width, int height, double **map){
  this->height = height;
  this->width = width;
  this->map = map;
  loadImage();
}

MapView::~MapView(){

}

int MapView::loadImage(){
  if (!environment.loadFromFile("./graphics/environment.png")){
    return 1;
  }
  else{
    wall.setTexture(environment);
    wall.setTextureRect(sf::IntRect(0, 0, 20, 20));

    ground.setTexture(environment);
    ground.setTextureRect(sf::IntRect(20, 0, 20, 20));
  }
  return 0;
}

void MapView::displayLoop(){
  sf::RenderWindow mywindow(sf::VideoMode(width, height, 32), "Computer Wars !!! ", sf::Style::Close | sf::Style::Resize);
  this->window = &mywindow;
  this->refresh();
  while (window->isOpen()){
    sf::Event event;

    while (window->waitEvent(event)){
      if (event.type == sf::Event::Closed){
        this->close();
      }
      this->refresh();
    }
  }
}

void MapView::close(){
  window->close();
}

void MapView::refresh(){
  window->clear();
  for(int x = 0; x<20; x++){
    for(int y = 0; y<20 ; y++){
      if(map[x][y] == 1){
        ground.setPosition(sf::Vector2f(x*20,y*20));
        window->draw(ground);
      }
      else if(map[x][y] == 2){
        wall.setPosition(sf::Vector2f(x*20,y*20));
        window->draw(wall);
      }
    }
  }
  window->draw(ground);
  window->draw(wall);

  window->display();
}
