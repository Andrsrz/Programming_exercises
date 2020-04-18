/*
 * C++ How To Program - 6.24 : Separating Digits
 * Description in txt file.
 */

#include <iostream>

// Avoid magic numbers
const int TEN = 10;
const int MAX_RANGE = 32767;

/* Function declaration */
int getNumberOfDigits(int number);
void printNumber(int number, int digits);
int powerNumber(int base, int exponent);

int main(){
	int input = 0;

	std::cout << "Enter an integer : ";
	std::cin >> input;

	if(input >= 1 && input <= MAX_RANGE){
		int digits = getNumberOfDigits(input);
		printNumber(input, digits);
	}

	return 0;
}

/* Function implementation */
int getNumberOfDigits(int number){
	int length = 1;

	while(number /= TEN)
		length++;

	return length;
}

void printNumber(int number, int digits){
	while(digits-- > 0){
		int digit = number / (powerNumber(::TEN, digits)) % ::TEN;
		std::cout << digit << "  ";
	}
}

int powerNumber(int base, int exponent){
	int power = 1;
	for(int i = 0; i < exponent; i++){
		power *= base;
	}
	return power;
}
