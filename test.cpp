#include <UnitTest++/UnitTest++.h>
#include "sphere.hpp"
#include "intersection.hpp"

TEST(Compiles){
	Intersection t;
	CHECK(true);
}

TEST(Intersection){
	Ray r(Vector3d(-10,0,0),Vector3d(1,0,0).unitVec());
	Sphere sph(Color(0xFFFFFF), Vector3d(5,0,0), 5);
	Intersection intsct = sph.getIntersection(r);
	CHECK_CLOSE(10, intsct.time, 0.01);
	CHECK_CLOSE(0, intsct.position.getX(), 0.01);
	CHECK_CLOSE(0, intsct.position.getY(), 0.01);
	CHECK_CLOSE(0, intsct.position.getZ(), 0.01);
}

int main(){
	return UnitTest::RunAllTests();
}
