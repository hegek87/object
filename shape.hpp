#ifndef SHAPE_H
#define SHAPE_H
#include "../color/color.h"
#include "../polynomial/polynomial.h"
#include "../vector3d/vector3d.h"
#include "../ray/ray.h"
#include "intersection.hpp"

class Shape{
	private:
		Color shapeColor;
		Vector3d position;
	public:
		Color getColor();
		Vector3d getPosition();
		
		virtual Intersection getIntersection(Ray) = 0;
};
#endif
