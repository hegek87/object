#ifndef SPHERE_H
#define SPHERE_H
#include "shape.hpp"

class Sphere : public Shape{
	private:
		double radius;
	public:
		Intersection getIntersection(Ray);
};
#endif
