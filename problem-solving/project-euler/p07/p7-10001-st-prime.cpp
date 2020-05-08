/*
 * Project Euler - Problem 7 : 10001st prime number.
*/

#include <iostream>

// Avoid magic numbers :
const int MAX = 10000; // Max iteration, instead of 10001 because we start at 0
const int FIRST_PRIME_NUMBER = 2;

int main(){
	bool isPrime = false;
	long int num = 1000000;
	int acc = 0;

	for(int i = 0; i <= num; i++){
		// Check if it's bigger than 1.
		if((num > 1) && (i > 1)){
			// Check if the iteration number is a prime number.
			for(int j = FIRST_PRIME_NUMBER; j <= i-1; j++){
  				if(i%j == 0){
					isPrime = false;
					break;
				}else{
					isPrime = true;
				}
			}
			
			if(isPrime){
				acc++; // Accumulate until is the same to the max iteration
				if(acc == MAX){
					std::cout << "10001st prime number is : " << i << std::endl;
					break;
				}
			}
		}
	}

	return 0;
}
