#include <catch2/catch.hpp>

int getGreatestCommonFactor(std::vector<int> commonFactors){
	/* We assume that the vector has been ordered before
	 * entering this phase. */
	return commonFactors[commonFactors.size() - 1];
}

TEST_CASE("4: getGreatestCommonFactor", "[multi-file:5]"){
	REQUIRE(getGreatestCommonFactor({ 1, 3 }) == 3);
	REQUIRE(getGreatestCommonFactor({ 1, 2, 3, 6 }) == 6);
}
