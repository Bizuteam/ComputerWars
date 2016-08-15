#include "data/unit/weapon/Weapon.hpp"

Weapon::Weapon() : Weapon(""){}

Weapon::Weapon(std::string name) : Weapon(name, 0){}

Weapon::Weapon(std::string name, double damage){
	this->name = name;
	this->damage = damage;
}

double Weapon::getDamage() const{
	return this->damage;
}

void Weapon::setDamage(double damage){
	this->damage = damage;
}
