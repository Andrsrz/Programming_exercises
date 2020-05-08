#include <catch2/catch.hpp>

std::vector<int> getFactors(int number){
	std::vector<int> factors;

	for(int i = 1; i <= number; i++){
		for(int j = i; j <= number; j++){
			if((i * j) == number){
				factors.push_back(i);
				factors.push_back(j);
			}
		}
	}

	return factors;
}

TEST_CASE("1: getFactors", "[multi-file:2]"){
	REQUIRE_THAT(getFactors(6), Catch::Contains<int>({ 1, 2, 3, 6 }));
	REQUIRE_THAT(getFactors(12), Catch::Contains<int>({ 1, 2, 3, 4, 6, 12 }));
	REQUIRE_THAT(getFactors(30), Catch::Contains<int>({ 1, 2, 3, 5, 6, 10, 15, 30 }));
}
