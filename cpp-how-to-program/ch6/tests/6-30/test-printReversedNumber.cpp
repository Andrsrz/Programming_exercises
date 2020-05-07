#include <catch2/catch.hpp>
#include <string>
#include <vector>

std::vector<int> six {6};
std::vector<int> twenty_eigth {2,8};
std::vector<int> three {8,1,2,8};
std::vector<int> four {4,9,6};

std::string printReversedNumber(std::vector<int> digits){
	std::string str = "";

	for(int i = digits.size() - 1; i >= 0; i--)
		str += std::to_string(digits[i]);

	return str;
}

TEST_CASE("1: printReversedNumber", "[multi-file:2]"){
	REQUIRE(printReversedNumber(six) == "6");
	REQUIRE(printReversedNumber(twenty_eigth) == "82");
	REQUIRE(printReversedNumber(three) == "8218");
	REQUIRE(printReversedNumber(four) == "694");
}
