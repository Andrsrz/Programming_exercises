/*
 * C++ How To Program - 3.12 : Exercise Account Class
*/

#include <iostream>
#include "Account.h"

// Constructor initializes accountBalance with one int supplied as argument
Account::Account(int amount){
	setBalance();
	// Checking if the amount is greater or equal than zero
	if(amount >= 0){
		credit(amount);
	}else if(amount < 0){
		std::cout << "Invalid initial balance." << std::endl;
		credit(0);
	}
}

// Function that sets accountBalance
void Account::credit(int amount){
	accountBalance = accountBalance + amount;
}

// Function that withdraw from accountBalance
void Account::debit(int amount){
	if(amount > accountBalance){
		std::cout << "Debit amount exceeded account balance." << std::endl;
	}else{
		accountBalance = ( accountBalance - amount );
	}
}

//Function to set the default accountBalance
void Account::setBalance(){
	accountBalance = 0;
}

// Function to get the accountBalance
int Account::getBalance(){
	return accountBalance;
}
