/*
 * C++ How to Programm - 3.17 : Making a Difference Health Profile 
*/

#include <iostream>
#include <string>
#include "HealthProfile.h"

// Avoid magic numbers :
const int TWELVE = 12;
const int MHR = 200;
const float MIN_RANGE = 0.50;
const float MAX_RANGE = 0.85;
const int TWO = 2;
const int SEVEN_HUNDRED_AND_THREE = 703;

// Constructor
HealthProfile::HealthProfile(std::string pFirstName, std::string pLastName, std::string pGender, int pBirthMonth, int pBirthDay, int pBirthYear, float pWeight, float pHeight){
	setFirstName(pFirstName);
	setLastName(pLastName);
	setGender(pGender);
	setBirthMonth(pBirthMonth);
	setBirthDay(pBirthDay);
	setBirthYear(pBirthYear);
	setWeight(pWeight);
	setHeight(pHeight);
}

// Setters and getters
void HealthProfile::setFirstName(std::string pFirstName){
	// Check for no blank first name
	if(pFirstName.length() >= 1){
		firstName = pFirstName;
	}else{
		std::cout << "Failed to set first name" << std::endl;
		std::cout << "Setting first name to default : 'Name'" << "\n..." << std::endl;
		firstName = "Name";
	}
}

std::string HealthProfile::getFirstName(){
	return firstName;
}

void HealthProfile::setLastName(std::string pLastName){
	// Check for no blank last name
	if(pLastName.length() >= 1){
		lastName = pLastName;
	}else{
		std::cout << "Failed to set last name" << std::endl;
		std::cout << "Setting last name to default : 'Last'" << "\n..." << std::endl;
		firstName = "Last";
	}
}

std::string HealthProfile::getLastName(){
	return lastName;
}

void HealthProfile::setGender(std::string pGender){
	gender = pGender;
}

std::string HealthProfile::getGender(){
	return gender;
}

void HealthProfile::setBirthMonth(int pBirthMonth){
	// Check valid month
	if( ( pBirthMonth >= 1 ) && ( pBirthMonth <= TWELVE ) ){
		birthMonth = pBirthMonth;
	}else{
		std::cout << "Provided month isn't in the correct range" << std::endl;
		std::cout << "Setting birth month to default : '1'" << "\n..."<< std::endl;
		birthMonth = 1;
	}
}

int HealthProfile::getBirthMonth(){
	return birthMonth;
}

void HealthProfile::setBirthDay(int pBirthDay){
	birthDay = pBirthDay;
}

int HealthProfile::getBirthDay(){
	return birthDay;
}

void HealthProfile::setBirthYear(int pBirthYear){
	birthYear = pBirthYear;
}

int HealthProfile::getBirthYear(){
	return birthYear;
}

void HealthProfile::setHeight(float pHeight){
	height = pHeight;
}

float HealthProfile::getHeight(){
	return height;
}

void HealthProfile::setWeight(float pWeight){
	weight = pWeight;
}

float HealthProfile::getWeight(){
	return weight;
}

// Methods
int HealthProfile::getAge(){
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

float HealthProfile::getMaximumHeartRate(int pAge){
	float maximumHeartRate;

	maximumHeartRate = ( MHR - pAge );

	return maximumHeartRate;
}

float HealthProfile::getTargetHeartRate(float pMaximumHeartRate){
	float targetHeartRate;

	targetHeartRate = ( ( ( pMaximumHeartRate * MAX_RANGE ) + ( pMaximumHeartRate * MIN_RANGE ) ) / TWO );

	return targetHeartRate;
}

float HealthProfile::getBodyMassIndex(){
	float bodyMassIndex;

	bodyMassIndex = ( ( getWeight() * SEVEN_HUNDRED_AND_THREE ) / ( getHeight() * getHeight() ) );

	return bodyMassIndex;
}
