#include <ihm/MapView.hpp>
#include <data/map/LocalMap.hpp>

MapView::MapView(int width, int height){
  this->height = height;
  this->width = width;
  loadImage();
}

MapView::~MapView(){

}

int MapView::loadImage(){
  if (!image.loadFromFile("./graphics/test.png")){
    return 1;
  }
  else{
    sprite.setTexture(image);
  }
  sprite.setTextureRect(sf::IntRect(0, 0, 100, 100));
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
  window->draw(sprite);
  window->display();
}
