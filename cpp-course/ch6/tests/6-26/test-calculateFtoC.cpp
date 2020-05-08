#include <catch2/catch.hpp>

float calculateFtoC(float fahrenheit){
	return ((fahrenheit - 32) * 5/9);
}

TEST_CASE("1: calculateFtoC 0°", "[multi-file:2]"){
	REQUIRE(calculateFtoC(0) == -17.78);
}

TEST_CASE("1: calculateFtoC Positive numbers", "[multi-file:2]"){
	REQUIRE(calculateFtoC(10) == -12.22);
	REQUIRE(calculateFtoC(30) == -1.11);
	REQUIRE(calculateFtoC(80) == 26.67);
	REQUIRE(calculateFtoC(170) == 76.67);
	REQUIRE(calculateFtoC(900) == 482.22);
}

TEST_CASE("1: calculateFtoC Negative numbers", "[multi-file:2]"){
	REQUIRE(calculateFtoC(-10) == -23.33);
	REQUIRE(calculateFtoC(-50) == -45.56);
}
