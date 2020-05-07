#include <catch2/catch.hpp>

/* Insertion sort */
std::vector<int> orderVector(std::vector<int> vect){
	for(int i = 1; i < static_cast<int>(vect.size()); i++){
		int j = i;
		while(j > 0 && (vect[j - 1] > vect[j])){
			int temp = vect[j];
			vect.at(j) = vect[j - 1];
			vect.at(j - 1) = temp;
			j--;
		}
	}

	return vect;
}

TEST_CASE("2: orderVector", "[multi-file:3]"){
	REQUIRE_THAT(orderVector({ 5 }), Catch::Equals<int>({ 5 }));
	REQUIRE_THAT(orderVector({ 2, 6, 1, 3 }), Catch::Equals<int>({ 1, 2, 3, 6 }));
	REQUIRE_THAT(orderVector({ 100, 99, 98, 97 }), Catch::Equals<int>({ 97, 98, 99, 100 }));
}
