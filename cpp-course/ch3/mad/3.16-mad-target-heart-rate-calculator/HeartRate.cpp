/*
 * C++ How To Program - 3.16 : Making a Difference Target Heart Rate Calculator
*/

#include <iostream>
#include <string>
#include "HeartRate.h"

// Avoid magic numbers :
const int TWELVE = 12;
const int MHR = 220;
const float MIN_RANGE = 0.50;
const float MAX_RANGE = 0.85;
const int TWO = 2;

// Constructor
HeartRate::HeartRate(std::string pFirstName, std::string pLastName, int pBirthMonth, int pBirthDay, int pBirthYear){
	setFirstName(pFirstName);
	setLastName(pLastName);
	setBirthMonth(pBirthMonth);
	setBirthDay(pBirthDay);
	setBirthYear(pBirthYear);
};

// Setters and getters
void HeartRate::setFirstName(std::string pFirstName){
	// Check for no blank first name
	if(pFirstName.length() >= 1){
		firstName = pFirstName;
	}else{
		std::cout << "Failed to set first name" << std::endl;
		std::cout << "Setting first name to default : 'Name'" << "\n..." << std::endl;
		firstName = "Name";
	}
}

std::string HeartRate::getFirstName(){
	return firstName;
}

void HeartRate::setLastName(std::string pLastName){
	// Check for no blank last name
	if(pLastName.length() >= 1){
		lastName = pLastName;
	}else{
		std::cout << "Failed to set last name" << std::endl;
		std::cout << "Setting last name to default : 'Last'" << "\n..." << std::endl;
		firstName = "Last";
	}
}

std::string HeartRate::getLastName(){
	return lastName;
}

void HeartRate::setBirthMonth(int pBirthMonth){
	// Check valid month
	if( ( pBirthMonth >= 1 ) && ( pBirthMonth <= TWELVE ) ){
		birthMonth = pBirthMonth;
	}else{
		std::cout << "Provided month isn't in the correct range" << std::endl;
		std::cout << "Setting birth month to default : '1'" << "\n..."<< std::endl;
		birthMonth = 1;
	}
}

int HeartRate::getBirthMonth(){
	return birthMonth;
}

void HeartRate::setBirthDay(int pBirthDay){
	birthDay = pBirthDay;
}

int HeartRate::getBirthDay(){
	return birthDay;
}

void HeartRate::setBirthYear(int pBirthYear){
	birthYear = pBirthYear;
}

int HeartRate::getBirthYear(){
	return birthYear;
}

// Methods
int HeartRate::getAge(){
	int month, day, year, age;
	
	std::cout << "Enter the current month : ";
	std::cin >> month;
	std::cout << "Enter the current day : ";
	std::cin >> day;
	std::cout << "Enter the current year : ";
	std::cin >> year;
	std::cout << "Current date : " << month << "/" << day << "/" << year << std::endl;
	
	std::cout << "Your birthday : " << getBirthMonth() << "/" << getBirthDay() << "/" << getBirthYear() << std::endl;
	age = ( year - getBirthYear() );
	if( month < getBirthMonth() ){
		age--;
	}
	std::cout << "Your age is : " << age << std::endl;

	return age;
}

float HeartRate::getMaximumHeartRate(int pAge){
	float maximumHeartRate;

	maximumHeartRate = ( MHR - pAge );

	return maximumHeartRate;
}

float HeartRate::getTargetHeartRate(float pMaximumHeartRate){
	float targetHeartRate;

	targetHeartRate = ( ( ( pMaximumHeartRate * MAX_RANGE ) + ( pMaximumHeartRate * MIN_RANGE ) ) / TWO );

	return targetHeartRate;
}
