/*
 * C++ How To Program - 5.5 : Summing Integers
 * Description in txt file
*/

#include <iostream>

// Function declaration
int calculateSum(int);

int main(){
	int amount = 0;
	int sum = 0;

	while(amount == 0){
		std::cout << "Enter the amount of integer you want to sum : ";
		std::cin >> amount;
	}

	sum = calculateSum(amount);
	std::cout << "The sum is : " << sum << std::endl;

	return 0;
}

// Function implementation
int calculateSum(int amount){
	int number = 0;
	int sum = 0;

	for(int i = 1; i <= amount; i++){
		std::cout << "Enter integer number " << i << " : ";
		std::cin >> number;
		sum += number;
	}

	return sum;
}
