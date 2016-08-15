#ifndef VECTOR_2D_HPP
#define VECTOR_2D_HPP

#include <cmath>

class Vector2D{

	private:
		double x;
		double y;

	public:
		Vector2D();
		Vector2D(double x, double y);
		Vector2D(const Vector2D& other);

		double getDistance(Vector2D other) const;

		double getX() const;
		double getY() const;
		void setX(double x);
		void setY(double y);
		void setVector(double x, double y);
		void setVector(const Vector2D& other);
};

#endif
