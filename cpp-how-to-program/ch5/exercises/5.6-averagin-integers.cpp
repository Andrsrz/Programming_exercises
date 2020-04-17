/*
 * C++ How To Program : 5.6 - Averaging Integers.
 * Description in txt file.
*/

#include <iostream>

// Function declaration
double calculateAverage(int);

int main(){
	int amount = 0;
	double average = 0;
	
	while(amount == 0){
		std::cout << "Enter amount of numbers you want to calculate the average : ";
		std::cin >> amount;
	}
	
	average = calculateAverage(amount);
	std::cout << "Average : " << average << std::endl;
	
	return 0;
}

// Function implementation
double calculateAverage(int amount){
	double average = 0;
	int number = 0;
	int sum = 0;
	
	for(int i = 1; i <= amount; i++){
		std::cin >> number;
		sum += number;
	}
	
	average = sum / amount;
	 
	return average;   
}