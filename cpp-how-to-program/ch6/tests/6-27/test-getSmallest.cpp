#include <catch2/catch.hpp>

double getSmallest(double x, double y, double z){
	if((x < y) && (x < z)){
		return x;
	}else if((y < x) && (y < z)){
		return y;
	}else if((z < x) && (z < y)){
		return z;
	}
}

TEST_CASE("1: getSmallest. Positive numbers", "[multi-file:2]"){
	REQUIRE(getSmallest(1.01, 1.0, 1.5) == 1.0);
	REQUIRE(getSmallest(5.50, 15.30, 5.40) == 5.40);
}

TEST_CASE("1: getSmallest. Negative numbers", "[multi-file:2]"){
	REQUIRE(getSmallest(-1.01, -1.0, -1.5) == -1.5);
	REQUIRE(getSmallest(-5.50, -15.30, -5.40) == -15.30);
}
