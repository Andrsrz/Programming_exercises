/*
 * C++ How To Program - 6.30 : Reverse Digits.
 * Description in txt file.
 */

#include <iostream>
#include <vector>

/* Avoid magic numbers */
const int TEN = 10;

/* Function declaration */
int getNumberOfDigits(int number);
std::vector<int> reverseNumber(int number, int digits);
int powerNumber(int base, int exponent);
void printReversedNumber(std::vector<int> digits);

int main(){
	int test = 7631;
	printReversedNumber(reverseNumber(test, getNumberOfDigits(test)));
	return 0;
}

/* Function implementation */
int getNumberOfDigits(int number){
	int length = 1;

	while(number /= ::TEN)
		length++;

	return length;
}

std::vector<int> reverseNumber(int number, int digits){
	std::vector<int> numberDigits;
	while(digits > 0){
		digits--;
		int digit = number / (powerNumber(::TEN, digits)) % ::TEN;
		numberDigits.push_back(digit);
	}
	return numberDigits;
}

int powerNumber(int base, int exponent){
	int power = 1;
	for(int i = 0; i < exponent; i++){
		power *= base;
	}
	return power;
}

void printReversedNumber(std::vector<int> digits){
	std::string str = "";
	for(int i = digits.size() - 1; i > 0; i--)
		str += std::to_string(digits[i]);
	std::cout << str << std::endl;
}
