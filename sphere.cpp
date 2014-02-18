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
	std::vector<double> abc;
	abc.push_back(a),abc.push_back(b),abc.push_back(c);
	Polynomial intersectEq(abc, 2);
	std::vector<double> time = intersectEq.solve();
	if(time.empty()){ return Intersection(); }
	double closestTime = (time[0] < time[1]) ? time[0] : time[1];
	return Intersection(	r.position+(r.direction.scalarMul(closestTime)),
					this,
					closestTime);
}
