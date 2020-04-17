/*
 * C++ How To Program - 3.16 : Making a Difference Target Heart Rate Calculator
*/

#include <iostream>
#include <string>
#include "HeartRate.h"

int main(){
	std::string name, lastName;
	int month, day, year;

	std::cout << "Welcome to Heart Rate Calculator!" << std::endl;
	std::cout << "What's your first name? : ";
	std::cin >> name;
	std::cout << "What's your last name? : ";
	std::cin >> lastName;
	std::cout << "Enter your birthday, like this 'mm dd yyyy' : ";
	std::cin >> month >> day >> year;

	// Create HeartRate object
	HeartRate heartRate1 = HeartRate(name, lastName, month, day, year);

	// Using its methods
	int age = heartRate1.getAge();
	std::cout << "You are " << age << " years old." << std::endl;
	std::cout << "Your Maximum Heart Rate is " << heartRate1.getMaximumHeartRate(age) << "." << std::endl;
	std::cout << "Your Target Heart Rate is " 
		<< heartRate1.getTargetHeartRate(heartRate1.getMaximumHeartRate(age))
		<< "."
		<< std::endl;

	return 0;
}
