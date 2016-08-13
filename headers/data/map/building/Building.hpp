#ifndef BUILDING_HPP
#define BUILDING_HPP

#include "../Size.hpp"

class Building{

	private:
		Size size;

	public:
		Building();
		Building(Size size);

		Size getSize();

		void setSize(Size size);
};

#endif
