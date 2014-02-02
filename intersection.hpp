#ifndef INTER_H
#define INTER_H
#include "shape.hpp"
#include "../vector3d/vector3d.h"
class Shape;

struct intersection{
	Vector3d position;
	Shape *sh;
};
#endif
