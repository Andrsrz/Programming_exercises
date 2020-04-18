#include <catch2/catch.hpp>

int convertMinutesToSeconds(int minutes){
	if(minutes > 60){
		return 0;
	}
	return minutes * 60;
}

TEST_CASE("1: convertMinutesToSeconds 0 is 0", "[multi-file:2]"){
	REQUIRE(convertMinutesToSeconds(0) == 0);
}

TEST_CASE("1: convertMinutesToSeconds in range of [1,60] is greater than 0", "[multi-file:2]"){
	REQUIRE(convertMinutesToSeconds(1) == 60);
	REQUIRE(convertMinutesToSeconds(5) == 300);
	REQUIRE(convertMinutesToSeconds(15) == 900);
	REQUIRE(convertMinutesToSeconds(30) == 1800);
	REQUIRE(convertMinutesToSeconds(60) == 3600);
}

TEST_CASE("1: convertMinutesToSeconds above 60 is 0 (false)", "[multi-file:2]"){
	REQUIRE(convertMinutesToSeconds(61) == 0);
	REQUIRE(convertMinutesToSeconds(100) == 0);
}
