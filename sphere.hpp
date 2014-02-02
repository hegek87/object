#ifndef SPHERE_H
#define SPHERE_H
#include "shape.hpp"

class Sphere : public Shape{
	private:
		double radius;
	public:
		virtual intersection getIntersection(Ray);
};
#endif
