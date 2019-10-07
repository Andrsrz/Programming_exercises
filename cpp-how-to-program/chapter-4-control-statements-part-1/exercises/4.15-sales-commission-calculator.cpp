/*
 * C++ How To Program - 4.15 : Sales Commission Calculator
 * Description in txt file.
*/

#include <iostream>
#include <string>
#include <vector>

// Avoid magic numbers
const float COMMISSION = 0.09;
const float WEEKLY_SALARY = 200;

// Salesperson class
class Salesperson{
public:
	// Constructor
	Salesperson(std::string sName, float sWeekSalary){
		setName(sName);
		setWeekSalary(sWeekSalary);
	}

	// Setters and getters
	void setName(std::string sName){ name = sName; }
	std::string getName(){ return name; }
	void setWeekSalary(float sWeekSalary){ weekSalary = sWeekSalary; }
	float getWeekSalary(){ return weekSalary; }
	void setGrossSale(float sGrossSale){ grossSale = sGrossSale; }
	float getGrossSale(){ return grossSale; }

	// Methods
	float calculateWeekEarnings(){
		float earnings = weekSalary + ( grossSale * COMMISSION );
		return earnings;
	}

private: // Attributes
	std::string name;
	float weekSalary;
	float grossSale;
};

int main(){
	int i = 0;
	float sale = 0;
	std::vector<Salesperson> arr;

	Salesperson andres = Salesperson("Andres Ruiz", WEEKLY_SALARY);
	Salesperson arturo = Salesperson("Arturo Ruiz", WEEKLY_SALARY);

	arr.push_back(andres);
	arr.push_back(arturo);

	while(i < arr.size()){
		std::cout << arr[i].getName() << std::endl;
		
		std::cout << "Enter your gross sale : ";
		std::cin >> sale;
		arr[i].setGrossSale(sale);

		std::cout << "Your weekly earnings are : " << arr[i].calculateWeekEarnings() << std::endl;

		i++;
	}

	return 0;
}
