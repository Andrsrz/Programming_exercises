#include <catch2/catch.hpp>

int flip(){
	return rand() % 2; /* Get 0 and 1 */
}

TEST_CASE("2: flip", "[multi-file:2]"){
	REQUIRE(flip() == 0);
	REQUIRE(flip() == 1);
}
