/*
 * Project Euler - Problem 4 : Largest palindrome product
 *
 * A palindromic number reads the same both ways. The largest palindrome made from the
 * product of two 2-digit numbers is 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
#include <string>
using namespace std;

// Avoid magic numbers :
const int FIVE = 5;
const int SIX = 6;
const int SEVEN = 7; // Digits of a number
const int RANGE_MIN = 100;
const int RANGE_MAX = 999; // Range of numbers
const int TEN = 10;
const int HUNDRED = 100;
const int THOUSAND = 1000;
const int TEN_THOUSAND = 10000;
const int HUNDRED_THOUSAND = 100000;
const int MILLION = 1000000; // Numbers to get how many digits a number have and to get every digit of any number.

// Function declaration :
int computeReverseNumber(int number);
int getNumberDigits(int number);

int main(){
	int product, reversedProduct, maxPalindromeProduct;
	/*
	 * We make two for loops, one inside another.
	 * The iteration variables are going to multiply in every iteration.
	 * Then we compute the reverse number with the product of every
	 * multiplication.
	 * Finally we check whether the product is equal to the reversed product
	 * and check if it's the largest until that moment.
	*/
	for( int i = RANGE_MIN; i <= RANGE_MAX; i++ ){
		for( int j = i; j <= RANGE_MAX; j++ ){
			product = i * j;
			reversedProduct = computeReverseNumber(product);

			if( product == reversedProduct ){
				if(  reversedProduct >= maxPalindromeProduct ){
					maxPalindromeProduct = reversedProduct;
				}
			}
		}
	}

	cout << "The largest palindrome product is : " << maxPalindromeProduct << endl;

	return 0;
}

int computeReverseNumber(int number){
	string reversedNum;
	int reversedNumber, numberDigits;
	numberDigits = getNumberDigits(number);
	/*
	 * We separate the number into it's digits and order it.
	*/
	if( numberDigits == FIVE ){
		reversedNum = to_string(( number / 1 ) % TEN) + 
			to_string(( number / TEN ) % TEN) +
			to_string(( number / HUNDRED ) % TEN) +
			to_string(( number / THOUSAND ) % TEN) +
			to_string(( number / TEN_THOUSAND ) % TEN);
		reversedNumber = stoi(reversedNum);
	}else if( numberDigits == SIX ){
		reversedNum = to_string(( number / 1 ) % TEN) +
			to_string(( number / TEN ) % TEN) +
			to_string(( number / HUNDRED ) % TEN) +
			to_string(( number / THOUSAND ) % TEN) +
			to_string(( number / TEN_THOUSAND ) % TEN) +
			to_string(( number / HUNDRED_THOUSAND ) % TEN);
		reversedNumber = stoi(reversedNum);
	}

	return reversedNumber;
}

int getNumberDigits(int number){
	number = abs(number);
	// In here we get how many digits have the number.
	return ( number < HUNDRED_THOUSAND ? FIVE :
		( number < MILLION ? SIX :
		SEVEN ));
}
