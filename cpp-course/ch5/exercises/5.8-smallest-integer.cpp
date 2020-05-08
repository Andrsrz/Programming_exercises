/*
 * C++ How To Program : 5.8 - Find the Smallest Integer
 * Description in txt file.
*/

#include <iostream>

int main(){
	int amount = 0;
	int smallest = 0;
	int number = 0;

	while(amount == 0){
		std::cout << "Enter several integers." << std::endl;
		std::cout << "The first integer is going to determine how many integers" << std::endl;
		std::cout << "you are going to get into the program." << std::endl;
		std::cout << "(Separate the integers with enters)" << std::endl;
		std::cin >> amount;
	}

	for(int i = 0; i < amount; i++){
		std::cin >> number;
		if(smallest > number){
			smallest = number;
		}
	}

	std::cout << "The smallest number is : " << smallest << std::endl;

	return 0;
}
