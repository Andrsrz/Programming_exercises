#include <catch2/catch.hpp>

/* Linear search */
std::vector<int> getCommonFactors(std::vector<int> vect1, std::vector<int> vect2){
	std::vector<int> commonFactors;

	for(int i = 0; i < static_cast<int>(vect1.size()); i++){
		for(int j = i; j < static_cast<int>(vect2.size()); j++){
			if(vect1[i] == vect2[j]){
				commonFactors.push_back(vect1[i]);
			}
		}
	}

	return commonFactors;
}

TEST_CASE("3. getCommonFactors", "[multi-file:4]"){
	REQUIRE_THAT(getCommonFactors({ 1, 3, 9 }, { 1, 2, 3, 4, 6, 12 }), Catch::Equals<int>({ 1, 3 }));
	REQUIRE_THAT(getCommonFactors({ 1, 2, 3, 6 }, { 1, 2, 3, 6, 9, 18 }), Catch::Equals<int>({ 1, 2, 3, 6 }));
}
