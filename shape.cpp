#include "shape.hpp"

Shape::Shape(Color col, Vector3d pos) : shapeColor(col), position(pos) {}
Vector3d Shape::getPosition(){ return this->position; }
Color Shape::getColor(){ return this->shapeColor; }
