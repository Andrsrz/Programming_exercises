/*
  * C++ How to Program - 4.29 : Infinity Loop.
  * Description in txt file.
*/

#include <iostream>
#include <cmath>

// Avoid magic numbers
const int TWO = 2;

int main(){
	int counter = 1;
	
	while(true){
		std::cout << pow(TWO, counter) << std::endl;
		counter++;
	}
	
	return 0;
}