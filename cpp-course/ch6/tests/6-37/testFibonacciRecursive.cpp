#include <catch2/catch.hpp>

int fibonacciRecursive(int number){
	if(number == 0){
		return 0;
	}else if(number == 1){
		return 1;
	}else{
		return fibonacciRecursive(number - 1) + fibonacciRecursive(number - 2);
	}
}

TEST_CASE("3: recursive fibonacci", "[multi-file:3]"){
	REQUIRE(fibonacciRecursive(5) == 5);
	REQUIRE(fibonacciRecursive(10) == 55);
	REQUIRE(fibonacciRecursive(20) == 6765);
}
