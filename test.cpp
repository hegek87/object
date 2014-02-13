#include <UnitTest++/UnitTest++.h>
#include "sphere.hpp"
#include "intersection.hpp"

TEST(Compiles){
	Intersection t;
	CHECK(true);
}

TEST(Intersection){
	Ray r(Vector3d(-10,0,0),Vector3d(0,1,1).unitVec());
	CHECK(true);
}

int main(){
	return UnitTest::RunAllTests();
}
