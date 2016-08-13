#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {

	private:
		std::string name;
		double damage;


	public:
		Weapon();
		Weapon(std::string name);
		Weapon(std::string name, double damage);

		double getDamage();

		void setDamage(double damage);
};

#endif
