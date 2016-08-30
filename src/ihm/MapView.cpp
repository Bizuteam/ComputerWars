#include <ihm/MapView.hpp>
#include <data/map/LocalMap.hpp>

MapView::MapView(/*double** map*/){
  sf::RenderWindow window(sf::VideoMode(800, 600, 32), "Computer Wars !!! ", sf::Style::Close | sf::Style::Resize);
  //this->window.create(sf::VideoMode(800, 600, 32), "Computer Wars !!! ", sf::Style::Close | sf::Style::Resize);

  // Boucle principale
   while (window.isOpen())
   {
       sf::Event event;

       while (window.waitEvent(event))
       {
           if (event.type == sf::Event::Closed)
               window.close();
       }

       // Remplissage de l'écran (couleur noire par défaut)
       window.clear();

       // Affichage de la fenêtre à l'écran
       window.display();
   }
}

MapView::~MapView(){

}
