/*
 * C++ How To Program - 3.12 : Exercise Account Class
*/

class Account{
public:
	Account(int); // Constructor that initialized an Account object
	void credit(int); // Function that sets the credit amount
	void debit(int); // Function that withdraw from the account balance
	void setBalance(); // Function that sets default account balance
	int getBalance(); // Function that gets account balance
private:
	int accountBalance; // Account balance
};
