#include <catch2/catch.hpp>

int power(int base, int exponent){
	int power = 1;
	for(int i = 0; i < exponent; i++){
		power *= base;
	}
	return power;
}

TEST_CASE("2: power", "[multi-file:2]"){
	REQUIRE(power(5, 2) == 25);
	REQUIRE(power(6, 4) == 1296);
	REQUIRE(power(2, 10) == 1024);
}
