#include <catch2/catch.hpp>

std::vector<int> fibonacci(int iterations){
	int x = 0;
	int y = 1;
	std::vector<int> fibonacciNumbers {x};
	for(int i = 1; i < iterations; i++){
		int z = x + y;
		fibonacciNumbers.push_back(z);
		x = y;
		y = z;
	}
	return fibonacciNumbers;
}

TEST_CASE("2: fibonacci", "[multi-file:2]"){
	REQUIRE_THAT(fibonacci(5), Catch::Equals<int>({ 0, 1, 2, 3, 5 }));
	REQUIRE_THAT(fibonacci(10), Catch::Equals<int>({ 0, 1, 2, 3, 5, 8, 13, 21, 34, 55 }));
	REQUIRE_THAT(fibonacci(20), Catch::Equals<int>({ 0, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765}));
}
