/*
 * C++ How To Program - 4.17 : Find the Largest Number
 * Description in txt file.
*/

#include <iostream>

// Avoid magic numbers
const int TEN = 10;

int main(){
	int counter = 0, number = 0, largest = 0;

	while(counter < TEN){
		std::cout << "Enter a number : ";
		std::cin >> number;

		if(number > largest){
			largest = number;
		}

		std::cout << "Current number : " << number << std::endl;
		std::cout << "Largest number : " << largest << std::endl;

		counter++;
	}

	return 0;
}
