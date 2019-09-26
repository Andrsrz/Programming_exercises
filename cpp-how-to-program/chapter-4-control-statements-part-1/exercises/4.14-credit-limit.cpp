/*
 * C++ How To Program - 4.14 : Credit Limit
 * Description in txt file.
*/

#include <iostream>

// Customer class
class Customer{
public:
	Customer(int, int, int, int, int); // Constructor
	void setAccountNumber(int); // Setters and getters
	int getAccountNumber();
	void setStartBalance(int);
	int getStartBalance();
	void setTotalCharges(int);
	int getTotalCharges();
	void setTotalCredit(int);
	int getTotalCredit();
	void setAllowedCredit(int);
	int getAllowedCredit();
	std::string calculateNewBalance(); // Methods
private:
	// Attributes
	int accountNumber;
	int startBalance;
	int totalCharges;
	int totalCredit;
	int allowedCredit;
};

int main(){
	return 0;
}
