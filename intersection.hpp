#ifndef INTER_H
#define INTER_H
#include "shape.hpp"
#include "../vector3d/vector3d.h"
class Shape;

struct Intersection{
	Vector3d position;
	Shape *sh;
	double time;
	
	Intersection() : position(), sh(), time(0){}
	Intersection(Vector3d pos, Shape *sh, double time) : 
		position(pos), 
		sh(sh),
		time(time) {}
};
#endif
