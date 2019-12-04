/*
 * C++ How To Program : 5.9 - Product of Odd Integers
 * Description in txt file.
*/

#include <iostream>

// Avoid magic numbers
const int TWO = 2;
const int FIFTEEN = 15;

int main(){
	int product = 1;

	for(int i = 1; i <= FIFTEEN; i++){
		// Get odd integers
		if( ( i % TWO ) != 0 ){
			product *= i;
		}
	}

	std::cout << "The product is : " << product << std::endl;

	return 0;
}
