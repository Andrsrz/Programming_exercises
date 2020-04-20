#include <catch2/catch.hpp>

bool isPerfect(int number){
	int total = 0;
	if(number <= 0){ return false; }
	for(int i = (number - 1); i > 0; i--){
		if((number % i) == 0){
			total += i;
		}
	}
	return (number == total);
}

TEST_CASE("1: isPerfect. Positive numbers", "[multi-file:2]"){
	REQUIRE(isPerfect(6) == true);
	REQUIRE(isPerfect(28) == true);
	REQUIRE(isPerfect(8128) == true);
	REQUIRE(isPerfect(496) == true);
}

TEST_CASE("1: isPerfect. Negative numbers", "[multi-file:2]"){
	REQUIRE(isPerfect(-6) == false);
	REQUIRE(isPerfect(-28) == false);
}

TEST_CASE("1: isPerfect. 0 is false", "[multi-file:2]"){
	REQUIRE(isPerfect(0) == false);
}
