/*
  * C++ How to Program - 4.27 : Printing the Decimal Equivalent of a Binary Number.
  * Description in txt file.
*/

#include <iostream>
#include <cmath>

// Avoid magic numbers
const int TWO = 2;
const int TEN = 10;

// Function declaration
int getNumberOfDigits(int);
int getDecimalValue(int);

int main(){
	int userInput = -1;
	int decimalNumber = 0;
	
	// Check user input
	while( userInput < 0 ){
		std::cout << "Enter a binary number : ";
		std::cin >> userInput;
	}
	
	decimalNumber = getDecimalValue(userInput);
	std::cout << "Decimal number : " << decimalNumber << std::endl;
	
	return 0;
}

int getNumberOfDigits(int number){
	int digits = 1;
	
	while( number /= TEN ){
		digits++;
	}
	
	return digits;
}

int getDecimalValue(int number){
	int decimal = 0;
	int digits = 0;
	
	digits = getNumberOfDigits(number);
	
	for(int i = 0; i < digits; i++){
		decimal += ( ( ( number / ( (int) pow( TEN, i ) ) ) % TEN ) * ( (int) pow( TWO, i ) ) );
	}
	
	return decimal;
}