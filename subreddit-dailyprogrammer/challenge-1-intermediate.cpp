/*
 * r/dailyprogrammer - Challenge 1 Intermediate : Guessing game.
 *
 * Create a program that will guess numbers between 1-100 and respond appropiately based on
 * wheter users say the number is too high or too low. Try to make a program that can guess
 * your number based on user input.
*/

#include <iostream>
#include <random>
using namespace std;

int const RANGE_FROM = 1;
int const RANGE_TO = 100;

int main(){
	int userNumber;
	int option;
	int secretNumber;
	int newSecretNumber;
	
	cout << "Welcome to 'GUESS THE NUMBER'\nI'm going to guess a number that you are going to think of." << endl;
	cout << "The are going to be three cases : " << endl;
	cout << "1. Too high 2. Too low 3. That is my number" << endl;
	cout << "\nPress enter to play!.";
	cin.ignore();

	secretNumber = rand() % RANGE_TO + RANGE_FROM;
	
	do{
		cout << "Are you thinking in the number : " << secretNumber << "?" << endl;
		cout << "1. Too high 2. Too low 3. That is my number" << endl;
		cout << "> ";
		cin >> option;

		switch(option){
			case 1:
				newSecretNumber = (RANGE_FROM + (rand() % secretNumber - RANGE_FROM + 1));
				secretNumber = newSecretNumber;
				break;
			case 2:
				newSecretNumber = (secretNumber + (rand() % RANGE_TO - secretNumber + 1));
				secretNumber = newSecretNumber;
				break;
			case 3:
				userNumber = secretNumber;
				cout << "Nice!\n";
				break;
		}
	}while(userNumber != secretNumber);

	return 0;
}
