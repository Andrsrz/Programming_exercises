#include <catch2/catch.hpp>

int getQualityPoints(int average){
	int qualityPoint = 0;
	if(average >= 90 && average <= 100){
		qualityPoint = 4;
	}else if(average >= 80 && average <= 89){
		qualityPoint = 3;
	}else if(average >= 70 && average <= 79){
		qualityPoint = 2;
	}else if(average >= 60 && average <= 69){
		qualityPoint = 1;
	}
	return qualityPoint;
}

TEST_CASE("2: getQualityPoints", "[multi-file:2]"){
	REQUIRE(getQualityPoints(95) == 4);
	REQUIRE(getQualityPoints(90) == 4);
	REQUIRE(getQualityPoints(89) == 3);
	REQUIRE(getQualityPoints(80) == 3);
	REQUIRE(getQualityPoints(70) == 2);
	REQUIRE(getQualityPoints(75) == 2);
	REQUIRE(getQualityPoints(61) == 1);
	REQUIRE(getQualityPoints(69) == 1);
	REQUIRE(getQualityPoints(40) == 0);
}
