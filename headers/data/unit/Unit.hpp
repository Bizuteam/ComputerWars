#ifndef UNIT_HPP
#define UNIT_HPP

#include <vector>

#include "weapon/Weapon.hpp"

class Unit {

	private:
		std::vector<Weapon> weapons;
		double life;
		double speed;
		double mana;

		void setWeapons(std::vector<Weapon> weapons);

	public:
		Unit();
		Unit(double life, double speed);
		Unit(double life, double speed, double mana);
		Unit(double life, double speed, double mana, std::vector<Weapon> weapons);

		double getLife();
		double getSpeed();
		double getMana();
		std::vector<Weapon> getWeapons();

		void setLife(double life);
		void takeDamage(double damage);
		void setSpeed(double speed);
		void setMana(double mana);
		void addWeapon(Weapon weapon);
		void removeWeapon(double weaponPlace);
};

#endif
