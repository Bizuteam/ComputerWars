#ifndef LOCAL_MAP_HPP
#define LOCAL_MAP_HPP

#include <map>

#include "Size.hpp"
#include "Vector2D.hpp"
#include "../exception/AlreadyNeighbourException.hpp"

class LocalMap{

	private:
		uint id;

		Size size;
		Vector2D unit;

		std::map<uint, LocalMap*> neighbours;

	public:
		LocalMap(uint id, int sizeX, int sizeY);
		LocalMap(uint id, int sizeX, int sizeY, double unitX, double unitY);

		uint getId();
		Size getSize() const;
		Vector2D getUnit() const;
		std::map<uint, LocalMap*> getNeighbours() const;

		void addNeighbour(LocalMap* neighbour);
		void removeNeighbour(uint id);
		void removeNeighbour(LocalMap* neighbour);

};
#endif
