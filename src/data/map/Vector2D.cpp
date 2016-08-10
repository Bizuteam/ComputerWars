#include "Vector2D.hpp"

Vector2D::Vector2D() : Vector2D(0.0, 0.0){}

Vector2D::Vector2D(double x, double y) {
	setVector(x, y);
}

Vector2D::Vector2D(Vector2D& other){
	setVector(other);
}


double Vector2D::getDistance(Vector2D other) const{
	return sqrt( ((this->x - other.x)*(this->x - other.x)) + ((this->y - other.y)*(this->y - other.y)) );
}


double Vector2D::getX() const{
	return this->x;
}

double Vector2D::getY() const{
	return this->y;
}

void Vector2D::setX(double x){
	this->x = x;
}

void Vector2D::setY(double y){
	this->y = y;
}

void Vector2D::setVector(double x, double y){
	this->x = x;
	this->y = y;
}

void Vector2D::setVector(Vector2D& other){
	this->x = other.x;
	this->y = other.y;
}
