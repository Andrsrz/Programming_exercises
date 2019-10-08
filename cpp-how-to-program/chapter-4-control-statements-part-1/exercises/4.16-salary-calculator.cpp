/*
 * C++ How To Program - 4.16 : Salary Calculator
 * Description in txt file.
*/

#include <iostream>
#include <string>
#include <vector>

// Avoid magic numbers
const int EXIT = -1;
const int MAX_HOURS = 40;
const float EXTRA_HOUR_PAY = 1.5;

class Employee{
public:
	// Constructor
	Employee(std::string employeeName, float employeeHourlyRate, int employeeHoursWorked){
		setName(employeeName);
		setHourlyRate(employeeHourlyRate);
		setHoursWorked(employeeHoursWorked);
	}

	// Setters and getters
	void setName(std::string employeeName){ name = employeeName; }
	std::string getName(){ return name; }
	void setHourlyRate(float employeeHourlyRate){ hourlyRate = employeeHourlyRate; }
	float getHourlyRate(){ return hourlyRate; }
	void setHoursWorked(int employeeHoursWorked){ hoursWorked = employeeHoursWorked; }
	int getHoursWorked(){ return hoursWorked; }

	// Methods
	float calculateSalary(){
		float salary = 0.0;

		if(hoursWorked <= MAX_HOURS){
			salary = hoursWorked * hourlyRate;
		}else{
			// Same top salary with 40 hours
			salary = MAX_HOURS * hourlyRate;
			// Extra hours pay formula 'extraHours * extraHourlyRate'
			salary += ( ( hoursWorked - MAX_HOURS ) * ( hourlyRate * EXTRA_HOUR_PAY ) );
		}

		return salary;
	}

private: // Attributes
	std::string name;
	float hourlyRate;
	int hoursWorked;
};

int main(){
	int i = 0, menu = 0;
	float hourlyRate = 0;
	std::vector<Employee> employees;

	Employee andres = Employee("Andres Ruiz", 0.0, 0);
	Employee arturo = Employee("Arturo Ruiz", 0.0, 0);
	Employee larissa = Employee("Larissa Ruiz", 0.0, 0);

	employees.push_back(andres);
	employees.push_back(arturo);
	employees.push_back(larissa);
	
	while(menu != EXIT){
		std::cout << employees[i].getName() << std::endl;
		std::cout << "Enter hours worked (-1 to end) : ";
		std::cin >> menu;
		
		if(menu == EXIT){
			break;
		}

		std::cout << "Enter hourly rate of the employee ($00.00) : ";
		std::cin >> hourlyRate;

		employees[i].setHoursWorked(menu);
		employees[i].setHourlyRate(hourlyRate);

		std::cout << "Salary is $" << employees[i].calculateSalary() << std::endl;

		i++;
	}

	return 0;
}
