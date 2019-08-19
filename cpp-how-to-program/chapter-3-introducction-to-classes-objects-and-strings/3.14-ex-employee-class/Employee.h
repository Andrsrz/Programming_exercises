/*
 * C++ How To Program - 3.14 : Exercise Employee Class.
*/

class Employee{
public:
	Employee(std::string, std::string, int);
	void setFirstName(std::string);
	std::string getFirstName();
	void setLastName(std::string);
	std::string getLastName();
	void setMonthlySalary(int);
	int getMonthlySalary();
private:
	std::string firstName;
	std::string lastName;
	int monthlySalary;
};
