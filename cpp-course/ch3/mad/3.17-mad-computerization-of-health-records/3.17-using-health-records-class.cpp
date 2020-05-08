/*
 * C++ How to Programm - 3.17 : Making a Difference Health Profile 
*/

#include <iostream>
#include <string>
#include "HealthProfile.h"

// Avoid magic numbers
const float UNDERWEIGHT = 18.5;
const float MIN_NORMAL = 18.5;
const float MAX_NORMAL = 24.9;
const float MIN_OVERWEIGHT = 25;
const float MAX_OVERWEIGHT = 29.9;
const float OBESE = 30;

int main(){
	std::string userName, userLastName, userGender;
	int userBirthMonth, userBirthDay, userBirthYear;
	float userWeight, userHeight;
	float MHR, THR, BMI;

	std::cout << "Enter the following information :" << std::endl;
	std::cout << "Name : ";
	std::cin >> userName;
	std::cout << "Lastname : ";
	std::cin >> userLastName;
	std::cout << "Gender : ";
	std::cin >> userGender;
	std::cout << "Birth month : ";
	std::cin >> userBirthMonth;
	std::cout << "Birth day : ";
	std::cin >> userBirthDay;
	std::cout << "Birth year : ";
	std::cin >> userBirthYear;
	std::cout << "Weight (pounds) : ";
	std::cin >> userWeight;
	std::cout << "Height (inches) : ";
	std::cin >> userHeight;

	// Create objects
	HealthProfile profile1 = HealthProfile(userName, userLastName, userGender, userBirthMonth, userBirthDay, userBirthYear, userWeight, userHeight);

	// Using methodis
	MHR = profile1.getMaximumHeartRate(profile1.getAge());
	THR = profile1.getTargetHeartRate(MHR);
	BMI = profile1.getBodyMassIndex();
	std::cout << "\nMaximum Heart Rate : " << MHR << std::endl;
	std::cout << "Target Heart Rate : " << THR << std::endl;
	std::cout << "Body Mass Index : " << BMI << std::endl;

	if( BMI < UNDERWEIGHT ){
		std::cout << "You're underweight!" << std::endl;
	}else if( ( BMI >= MIN_NORMAL ) || ( BMI <= MAX_NORMAL ) ){
		std::cout << "You're normal!" << std::endl;
	}else if( ( BMI >= MIN_OVERWEIGHT ) || ( BMI <= MAX_OVERWEIGHT ) ){
		std::cout << "You're overweight!" << std::endl;
	}else if( BMI >= OBESE ){
		std::cout << "You're obese!" << std::endl;
	}

	return 0;
}
