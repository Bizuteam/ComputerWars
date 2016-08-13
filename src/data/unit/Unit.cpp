#include <data/unit/Unit.hpp>

using namespace std;

Unit::Unit() : Unit(0, 0){}

Unit::Unit(double life, double speed) : Unit(life, speed, 0){}

Unit::Unit(double life, double speed, double mana) : Unit(life, speed, mana, vector<Weapon>()){}

Unit::Unit(double life, double speed, double mana, std::vector<Weapon> weapons){
	setLife(life);
	setSpeed(speed);
	setMana(mana);
	setWeapons(weapons);
}

double Unit::getLife(){
	return this->life;
}

double Unit::getSpeed(){
	return this->speed;
}

double Unit::getMana(){
	return this->mana;
}

std::vector<Weapon> Unit::getWeapons(){
	return this->weapons;
}

void Unit::setLife(double life){
	if(life < 0){
		this->life = 0;
	}
	else{
		this->life = life;
	}

}

void Unit::takeDamage(double damage){
	setLife(this->life - damage);
}

void Unit::setSpeed(double speed){
	this->speed = speed;
}

void Unit::setMana(double mana){
	this->mana = mana;
}

void Unit::setWeapons(vector<Weapon> weapons){
	this->weapons = weapons;
}

void Unit::addWeapon(Weapon weapon){
	this->weapons.push_back(weapon);
}

void Unit::removeWeapon(double weaponPlace){
	this->weapons.erase(this->weapons.begin()+weaponPlace);
}
