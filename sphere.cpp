#include "sphere.hpp"
#include "shape.hpp"

Sphere::Sphere(Color col, Vector3d center, double rad) : 
	Shape(col, center),
	radius(rad) {}
	
Sphere::~Sphere(){}

Intersection Sphere::getIntersection(Ray r){
	std::vector<double> abc;
	//find intersect position
	abc.push_back(1);
	abc.push_back(2*r.direction.dotProd(r.position-this->getPosition()));
	abc.push_back((r.position -
		this->getPosition()).squareMag()-(radius*radius));
	Polynomial intersectEq(abc, 2);
	std::vector<double> time = intersectEq.solve();
	if(time.empty()){ return Intersection(); }
	double closestTime = (time[0] < time[1]) ? time[0] : time[1];
	return Intersection(	r.position+(r.direction.scalarMul(closestTime)),
					this,
					closestTime);
}
