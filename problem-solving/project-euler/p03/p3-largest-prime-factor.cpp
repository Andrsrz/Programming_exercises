/*
 * Project Euler - Problem 3 : Largest prime factor
 *
 * The primer factors of 13195 are 5, 7, 11 and 29.
 * What is the largest prime factor of the number 600851475143 ?.
*/

#include <iostream>

/*
 * Before we do anything we need to know what a prime factor is
 * and how to know which numbers are prime factors and why.
 *
 * A primer number is a whole number greater than 1 that can not be made 
 * by multiplying other whole numbers, it is only made by 1 and itself.
 * For example: 2, 3, 5, 7, 11, 13, 17, 19, 23 and so on.
 * We can infer that a primer number it is only divisible by 1 and itself.
 *
 * Given a number from a loop 'i' we can iterate from 2 to 'i-1'. In every iteration
 * we can do 'i%j' to know if there is a remainder, if in any of the iterations 
 * there is no remainder then the number 'i' is not a prime number.
 *
 * Then by the number given by the user we can 'n%i' to know if the
 * prime number is a factor of the number given by the user.
*/

int main(){
	long int nNum = 0;
	// Avoid magic numbers :
	const int N_FIRST_PRIME_NUMBER = 2;
	bool isPrime = true;

	// User inputs the number.
	std::cout << "Enter a number : ";
	std::cin >> nNum;

	// We loop 'n' times.
	for(int i = 0; i <= nNum; i++){
		// Check if it's bigger than 1.
		if((nNum > 1) && (i > 1)){
			// Check if the iteration number is a prime number.
			for(int j = N_FIRST_PRIME_NUMBER; j <= i-1; j++){
  				if(i%j == 0){
					isPrime = false;
					break;
				}else{
					isPrime = true;
				}
			}

			/*
			 * If the iteration number is indeed a prime number
			 * then we check if that prime number is a factor of
			 * the number given by the user.
			*/
			if(isPrime == true){
				if(nNum%i == 0){
					std::cout << i << std::endl;
					nNum = (nNum/i);
					// Repeat until the number given by the user is equal to 1.
					if(nNum==1){
						break;
					}
					i--;
				}
			}
		}
	}

	return 0;
}
