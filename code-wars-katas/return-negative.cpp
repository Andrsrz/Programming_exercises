/*
 * Code Wars : Kata - Return Negative
*/

#include <iostream>
#include <experimental/random>

// Avoid magic numbers
const int MIN_RANGE = -1000;
const int MAX_RANGE = 1000;

// Function declaration
int getRandomNumber();
int makeNegative(int);

int main(){
	int number = getRandomNumber();
	std::cout << number << std::endl;
	std::cout << makeNegative(number) << std::endl;
	return 0;
}

// Function implementation
int getRandomNumber(){
	// Create random integer
	int randomNumber = std::experimental::randint(MIN_RANGE, MAX_RANGE);

	return randomNumber;
}

int makeNegative(int number){
	if( number == 0 ){
		return 0;
	}else if( number > 0 ){
		int negativeNumber = 0;
		negativeNumber = negativeNumber - number;
		return negativeNumber;
	}else if( number < 0 ){
		return number;
	}

	return 0;
}
