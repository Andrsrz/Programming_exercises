#include <catch2/catch.hpp>

int convertHoursToSeconds(int hours){
	if(hours > 12 || hours < 1){
		return 0;
	}
	return hours * (60 * 60);
}

TEST_CASE("2: convertHoursToSeconds 0 is 0", "[multi-file:3]"){
	REQUIRE(convertHoursToSeconds(0) == 0);
}

TEST_CASE("2: convertHoursToSeconds in range of [1,12] is greater than 0", "[multi-file:3]"){
	REQUIRE(convertHoursToSeconds(1) == 3600);
	REQUIRE(convertHoursToSeconds(4) == 14400);
	REQUIRE(convertHoursToSeconds(11) == 39600);
}

TEST_CASE("2: convertHoursToSeconds above 12 and below 1 is 0 (false)", "[multi-file:3]"){
	REQUIRE(convertHoursToSeconds(25) == 0);
	REQUIRE(convertHoursToSeconds(-5) == 0);
}
