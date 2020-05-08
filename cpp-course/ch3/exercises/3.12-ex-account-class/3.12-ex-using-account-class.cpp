/*
 * C++ How To Program - 3.12 : Exercise Account Class
 *
 * Create an Account class that a bank might use to represent customers bank accounts.
 * Include a data member of type int to represent the account balance.
 * Constructor that receives an initial balance and uses it to initialize the data member,
 *	the constructor should validate the initial balance to ensure that it's greater that or
 *	equal to 0. If not, set the balance to 0 and display an error message indicating that the
 *	initial balance was invalid.
 * Provide three member functions.
 *	credit : should add an amount to the current balance.
 *	debit : should withdraw money from the Account and ensure that the debit amount does not
 *		exceed the Account's balance. If it does, the balance should be left unchanged and the
 *		function should print a message indicatin "Debit amount exceeded account balance".
 *	getBalance : should return the current balance.
*/

#include <iostream>
#include "Account.h"

// Avoid magic numbers
const int X = 100;
const int Y = 75;
const int Z = -25;

int main(){
	// Creating Account objects
	Account andressAccount(Y);
	Account fridasAccount(X);
	Account arturosAccount(Z);

	// Using Account object's methods
	std::cout << "Andre's Account Balance : " << andressAccount.getBalance() << std::endl;
	std::cout << "Frida's Account Balance : " << fridasAccount.getBalance() << std::endl;
	std::cout << "Arturo's Account Balance : " << arturosAccount.getBalance() << std::endl;

	arturosAccount.credit(Y);

	andressAccount.debit(X);
	fridasAccount.debit(Y);

	std::cout << "Andre's Account Balance : " << andressAccount.getBalance() << std::endl;
	std::cout << "Frida's Account Balance : " << fridasAccount.getBalance() << std::endl;
	std::cout << "Arturo's Account Balance : " << arturosAccount.getBalance() << std::endl;

	andressAccount.credit(Y);
	std::cout << "Andre's Account Balance : " << andressAccount.getBalance() << std::endl;
	
	return 0;
}
