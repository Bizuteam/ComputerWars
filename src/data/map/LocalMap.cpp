#include <data/map/LocalMap.hpp>

using namespace std;

LocalMap::LocalMap(uint id, int sizeX, int sizeY) : LocalMap(id, sizeX, sizeY, 1, 1){

}

LocalMap::LocalMap(uint id, int sizeX, int sizeY, double unitX, double unitY){
	this->id = id;
	this->size.x = sizeX;
	this->size.y = sizeY;
	this->unit.setVector(unitX, unitY);
}

uint LocalMap::getId(){
	return id;
}

Size LocalMap::getSize() const{
	return this->size;
}

Vector2D LocalMap::getUnit() const{
	return this->unit;
}

std::map<uint, LocalMap*> LocalMap::getNeighbours() const{
	return this->neighbours;
}

void LocalMap::addNeighbour(LocalMap* neighbour){
	if(!this->neighbours.insert(make_pair(neighbour->getId(), neighbour)).second){
		throw new AlreadyNeighbourException("Neighbour already exist");
	}
}

void LocalMap::removeNeighbour(LocalMap* neighbour){
	removeNeighbour(neighbour->getId());
}

void LocalMap::removeNeighbour(uint id){
	this->neighbours.erase(id);
}
