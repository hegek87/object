#ifndef SPHERE_H
#define SPHERE_H
#include "shape.hpp"

class Sphere : public Shape{
	private:
		double radius;
	public:
		Sphere(Color, Vector3d, double);
		Intersection getIntersection(Ray);
};
#endif
