/*
 * C++ How To Program - 3.14 : Exercise Employee Class.
*/

#include <string>
#include "Employee.h"

// Constructor
Employee::Employee(std::string eFirstName, std::string eLastName, int eMonthlySalary){
	setFirstName(eFirstName);
	setLastName(eLastName);
	if(eMonthlySalary <= 0){
		setMonthlySalary(0);
	}else{
		setMonthlySalary(eMonthlySalary);
	}
}

void Employee::setFirstName(std::string eFirstName){
	firstName = eFirstName;
}

std::string Employee::getFirstName(){
	return firstName;
}

void Employee::setLastName(std::string eLastName){
	lastName = eLastName;
}

std::string Employee::getLastName(){
	return lastName;
}

void Employee::setMonthlySalary(int eMonthlySalary){
	monthlySalary = eMonthlySalary;
}

int Employee::getMonthlySalary(){
	return monthlySalary;
}
