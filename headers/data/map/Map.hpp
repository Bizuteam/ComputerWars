#ifndef MAP_HPP
#define MAP_HPP

#include "Size.hpp"
#include "Vector2D.hpp"

class Map{

	private:
		Size size;
		Vector2D unit;

	public:
		Map(int sizeX, int sizeY);
		Map(int sizeX, int sizeY, double unitX, double unitY);

};
#endif
