/*
 * Project Euler - Problem 6 : Sum Square Difference
*/

#include <iostream>

// Avoid magic numbers :
const int HUNDRED = 100;

int main(){
	int squareSum = 0;
	int sumSquare = 0;
	int difference = 0;

	for(int i = 1; i <= HUNDRED; i++){
		squareSum = squareSum + ( i * i );
		sumSquare = sumSquare + i;
	}
	
	sumSquare = ( sumSquare * sumSquare );
	difference = sumSquare - squareSum;

	std::cout << difference << std::endl;

	return 0;
}
