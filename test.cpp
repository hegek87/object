#include <UnitTest++/UnitTest++.h>
#include "sphere.hpp"
#include "intersection.hpp"

TEST(Compiles){
	intersection t;
	CHECK(true);
}

int main(){
	return UnitTest::RunAllTests();
}
