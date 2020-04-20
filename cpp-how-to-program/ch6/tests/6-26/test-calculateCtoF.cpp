#include <catch2/catch.hpp>

float calculateCtoF(float celsius){
	return ((celsius * 9/5) + 32);
}

TEST_CASE("1: calculateCtoF 0°", "[multi-file:2]"){
	REQUIRE(calculateCtoF(0) == 32.0);
}

TEST_CASE("1: calculateCtoF Positive numbers", "[multi-file:2]"){
	REQUIRE(calculateCtoF(10) == 50.0);
	REQUIRE(calculateCtoF(30) == 86.0);
	REQUIRE(calculateCtoF(80) == 176.0);
	REQUIRE(calculateCtoF(200) == 392.0);
	REQUIRE(calculateCtoF(900) == 1652.0);
}

TEST_CASE("1: calculateCtoF Negative numbers", "[multi-file:2]"){
	REQUIRE(calculateCtoF(-10) == 14.0);
	REQUIRE(calculateCtoF(-50) == -58.0);
}
