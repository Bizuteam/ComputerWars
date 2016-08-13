#ifndef COMPONENT_HPP
#define COMPONENT_HPP

class Component{

	private:
		double life;

	public:
		Component();
		Component(double life);

		double getLife();

		void setLife(double life);
		void takeDamage(double damage);
};


#endif
