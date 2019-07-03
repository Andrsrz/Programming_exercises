/*
* Project Euler - Problem 1 : Multiples of 3 and 5.
*
* If we list all the natural numbers below 10 that are
* multiples of 3 and 5, we get 3, 5, 6 and 9. The sum of these
* multiples is 23.
*
* Find the sum of all the multiples of 3 and 5 below 1000.
*/

#include <iostream>

/*
*
* First we need to know what a multiple is.
* A multiple is the result of multiplying a number
* by any integer. No fractions.
* Example:
* 12 is a multiple of 3 because 3 * 4 = 12.
* Knowing this we can proceed.
*
*/

// To avoid magic numbers
const int THREE = 3;
const int FIVE = 5;
const int MAX_LENGHT = 1000;

// Main method
int main(){
	/*
	*
	* So to know if a number is a multiple of other in the code
	* we need to use the module " % " operator to know if the given
	* number divided by 3 or 5 left a remainder equal to 0
	* if so then the given number it is a multiple of 3 or 5.
	* And that given number is stored and summed to a variable
	* to get the sum of all the multiples.
	*
	*/
	unsigned int sum;

	for(int i = 1; i < MAX_LENGHT; i++){
		if((i%THREE == 0) || (i%FIVE == 0)){
			sum += i;
		}
	}

	std::cout << "The sum is : " << sum << std::endl;
	
	return 0;
}
