/*
  * C++ How to Program - 5.10 Factorials.
  * Description in txt file.
*/

#include <iostream>

// Avoid magic numbers
const int FIVE = 5;

// Function declaration
double makeFactorial(int);
void printTabular(int, double);

int main(){
	std::cout << "Number\tFactorial" << std::endl;
	for(int i = 1; i <= FIVE; i++){
		printTabular(i, makeFactorial(i));
	}

	return 0;
}

// Function implementation
double makeFactorial(int number){
	double factorial = 1;

	// The formula is : n! = n * ( n - 1 ) * ( n - 2 ) * ... * 1
	for(int i = 0; i < number; i++){
		factorial *= (number - i);
	}

	return factorial;
}

void printTabular(int number, double factorial){
	std::cout << number << "!\t" << factorial << std::endl;
}
