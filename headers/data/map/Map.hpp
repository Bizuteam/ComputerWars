#ifndef MAP_HPP
#define MAP_HPP

#include "Vector2D.hpp"

struct Size{
	int x;
	int y;
};

class Map{

	private:
		Size size;
		Vector2D unit;

	public:
		Map(int sizeX, int sizeY);
		Map(int sizeX, int sizeY, double unitX, double unitY);

};
#endif
