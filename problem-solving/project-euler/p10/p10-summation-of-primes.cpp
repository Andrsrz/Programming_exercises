/*
 * Project Euler - Problem 10 : Summation of primes
*/

#include <iostream>

// Avoid magic numbers
const long int TWO_MILLION = 2000000;
const int TWO = 2;

// Function declaration
long int getSummationOfPrimes(long int);

int main(){
	std::cout << getSummationOfPrimes(TWO_MILLION) + TWO << std::endl;
	return 0;
}

// Function implementation
long int getSummationOfPrimes(const long int maxRange){
	long int sum = 0;
	long int number = 0;
	bool isPrime = false;

	for(int i = TWO; i < maxRange; i++){
		// Check if the iteration number is a prime number.
		for(int j = TWO; j <= i-1; j++){
			if(i%j == 0){
				isPrime = false;
				break;
			}else{
				isPrime = true;
				number = i;
			}
		}

		if(isPrime){
			sum += number;
		}
	}

	return sum;
}
