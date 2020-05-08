/*
  * C++ How to Program - 4.26 Palindromes.
  * Description in txt file.
*/

#include <iostream>

// Avoid magic numbers
const int FIVE = 5;
const int TEN = 10;
const int THOUSAND = 1000;
const int TEN_THOUSAND = 10000;
const int HUNDRED_THOUSAND = 100000;

int getNumberDigits(int);
bool isPalindrome(int);

int main(){
	int userInput = 0;
	int digits = 1;
	
	while(digits < FIVE){
		std::cout << "Enter a five digit integer : ";
		std::cin >> userInput;
		digits = getNumberDigits(userInput);
	}
	
	std::cout << "0 -> False | 1 -> True" << std::endl;
	std::cout << "Output : " << isPalindrome(userInput) << std::endl;
	
	return 0;
}

 
int getNumberDigits(int number){
	int digits = 0;
	number = abs(number);
	
	if( ( number > TEN_THOUSAND ) && ( number < HUNDRED_THOUSAND ) ){
		digits = FIVE;
	}
	
	return digits;
}

bool isPalindrome(int number){
	bool isPalindrome = false;
	int firstDigit = 0;
	int secondDigit = 0;
	int fourthDigit = 0;
	int fifthDigit = 0;

	firstDigit = ( number / TEN_THOUSAND ) % TEN;
	secondDigit = ( number / THOUSAND ) % TEN;
	fourthDigit = ( number / TEN ) % TEN;
	fifthDigit = ( number / 1 ) % TEN;

	if( ( firstDigit == fifthDigit ) && ( secondDigit == fourthDigit ) ){
		isPalindrome = true;
	}

	return isPalindrome;
}
