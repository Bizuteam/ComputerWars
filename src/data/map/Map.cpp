#include "Map.hpp"

Map::Map(int sizeX, int sizeY) : Map(sizeX, sizeY, 1, 1){

}

Map::Map(int sizeX, int sizeY, double unitX, double unitY){
	this->size.x = sizeX;
	this->size.y = sizeY;
	this->unit.setVector(unitX, unitY);
}
