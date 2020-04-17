/*
 * C++ How To Program - 3.14 : Exercise Employee Class.
*/

#include <iostream>
#include "Employee.h"

// Avoid magic numbers :
const int MONTHS_PER_YEAR = 12;
const float TEN_PERCENT = .10;

// Function declaration
void printEmployee(Employee employee);

int main(){
	std::string name1 = "Andres";
	std::string last1 = "Ruiz";
	std::string name2 = "Frida";
	std::string last2 = "Baltazar";
	int salary1 = 315;
	int salary2 = 325;
	
	// Employee objects
	Employee andres = Employee(name1, last1, salary1);
	Employee frida = Employee(name2, last2, salary2);

	// Using methods
	printEmployee(andres);
	printEmployee(frida);
	
	std::cout << "Applying a 10 percet extra to salaries" << "\n..." << std::endl;
	andres.setMonthlySalary( andres.getMonthlySalary() + ( andres.getMonthlySalary() * TEN_PERCENT ) );
	frida.setMonthlySalary( frida.getMonthlySalary() + ( frida.getMonthlySalary() * TEN_PERCENT ) );
	
	printEmployee(andres);
	printEmployee(frida);
	
	return 0;
}

void printEmployee(Employee employee){
	std::cout << employee.getFirstName() << "'s year salary : $" << employee.getMonthlySalary() * MONTHS_PER_YEAR << "\n";
}
