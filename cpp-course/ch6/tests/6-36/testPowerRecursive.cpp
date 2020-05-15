#include <catch2/catch.hpp>

int powerRecursive(int base, int exponent){
	if(exponent != 1){
		return base * powerRecursive(base, exponent - 1);
	}
	return base;
}

TEST_CASE("3: recursive power", "[multi-file:3]"){
	REQUIRE(powerRecursive(5, 2) == 25);
	REQUIRE(powerRecursive(6, 4) == 1296);
	REQUIRE(powerRecursive(2, 10) == 1024);
}
