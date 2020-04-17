/*
  * C++ How to Program - 5.11 Compound Interest.
  * Description in txt file.
*/

#include <iostream>
#include <cmath> // pow

// Avoid magic numbers
const int TEN = 10;
const double THOUSAND = 1000.0;
const double POINT_ZERO_ONE = .01;
const double POINT_ZERO_FIVE = .05;
const double POINT_TEN = .10;

int main(){
	double amount = 0;
	double principal = THOUSAND;

	for(double rate = POINT_ZERO_FIVE; rate <= POINT_TEN; rate += POINT_ZERO_ONE){
		std::cout << "Year\t" << "Amount on deposit" << std::endl;
		std::cout << "Rate : " << rate << std::endl;
		// a = p ( 1 + r )^n
		for(int year = 1; year <= TEN; year++){
			amount = principal * pow( 1 + rate, year );
			std::cout << year << "\t" << amount << std::endl;
		}
	}

	return 0;
}
