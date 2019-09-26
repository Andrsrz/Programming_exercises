/*
 * C++ How To Program - 4.14 : Credit Limit
 * Description in txt file.
*/

#include <iostream>

// Customer class
class Customer{
public:
	// Constructor
	Customer(int cAccountNumber, int cStartBalance,
		int cTotalCharges, int cTotalCredit, int cAllowedCredit){
		setAccountNumber(cAccountNumber);
		setStartBalance(cStartBalance);
		setTotalCharges(cTotalCharges);
		setTotalCredit(cTotalCredit);
		setAllowedCredit(cAllowedCredit);
	}

	// Setters and getters
	void setAccountNumber(int cAccountNumber){
		accountNumber = cAccountNumber;
	}

	int getAccountNumber(){
		return accountNumber;
	}

	void setStartBalance(int cStartBalance){
		startBalance = cStartBalance;
	}

	int getStartBalance(){
		return startBalance;
	}

	void setTotalCharges(int cTotalCharges){
		totalCharges = cTotalCharges;
	}

	int getTotalCharges(){
		return totalCharges;
	}

	void setTotalCredit(int cTotalCredit){
		totalCredit = cTotalCredit;
	}

	int getTotalCredit(){
		return totalCredit;
	}

	void setAllowedCredit(int cAllowedCredit){
		allowedCredit = cAllowedCredit;
	}

	int getAllowedCredit(){
		return allowedCredit;
	}

	// Methods
	std::string calculateNewBalance(){
		std::string a = "";
		int newBalance = 0;

		// New balance formula
		newBalance = startBalance + totalCharges - totalCredit;

		if(newBalance > allowedCredit){
			a = "Account Number : " + std::to_string(accountNumber)
				+ "\nCredit Limit : " + std::to_string(allowedCredit)
				+ "\nNew Balance : " + std::to_string(newBalance)
				+ "\nCredit Limit Exceeded";
		}else{
			a = "All good!";
		}

		return a;
	}
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
