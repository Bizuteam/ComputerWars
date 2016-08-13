#include <data/map/building/component/Component.hpp>

Component::Component() : Component(1){}

Component::Component(double life){
	setLife(life);
}

double Component::getLife(){
	return this->life;
}

void Component::setLife(double life){
	if(life < 0){
		this->life = 0;
	}
	else{
		this->life = life;
	}

}

void Component::takeDamage(double damage){
	setLife(this->life - damage);
}
