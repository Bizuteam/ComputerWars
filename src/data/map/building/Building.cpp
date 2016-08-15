#include <data/map/building/Building.hpp>

Building::Building() : Building(Size(0, 0)){

}

Building::Building(Size size){
	setSize(size);
}

Size Building::getSize() const{
	return this->size;
}

void Building::setSize(Size size){
	this->size = size;
}
