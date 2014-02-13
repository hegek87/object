#include "sphere.hpp"
#include "shape.hpp"

Sphere::Sphere(Color col, Vector3d center, double rad) : 
	Shape(col, center),
	radius(rad) {}

Intersection Sphere::getIntersection(Ray r){
	//find intersect position
	double a = 1;
	double b = 2*r.direction.dotProd(r.position-this->getPosition());
	double c = (r.position-this->getPosition()).squareMag()-(radius*radius);
	double abc[3] = {c, b, a};
	Polynomial intersectEq(abc, 2);
	double *time = intersectEq.solve();
	double closestTime = (*time < *(time+1)) ? *time : *(time+1);
	return Intersection(	r.position+(r.direction.scalarMul(closestTime)),
					this,
					closestTime);
}
