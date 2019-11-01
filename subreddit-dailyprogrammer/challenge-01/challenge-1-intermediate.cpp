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

// Function declaration
void welcomeUser();
int getRandNumber(int rangeMin, int rangeMax);

int main(){
	int userNumber;
	int option;
	int secretNumber;
	int rangeMin = 1;
	int rangeMax = 100;
	
	welcomeUser();
	secretNumber = getRandNumber(rangeMin, rangeMax);
	
	do{
		cout << "Are you thinking in the number : " << secretNumber << "?\n";
		cout << "1. Too high 2. Too low 3. That is my number\n";
		cout << "> ";
		cin >> option;

		switch(option){
			case 1: // Number is too high
				rangeMax = secretNumber;
				secretNumber = getRandNumber(rangeMin, secretNumber);
				break;
			case 2: // Number is too low
				rangeMin = secretNumber;
				secretNumber = getRandNumber(secretNumber, rangeMax);
				break;
			case 3:
				userNumber = secretNumber;
				cout << "Nice! I guessed your number.\n";
				break;
			default:
				cout << "Enter a valid option!\n";
				break;
		}
	}while(userNumber != secretNumber);
	
	return 0;
}

void welcomeUser(){
	cout << "Welcome to 'GUESS THE NUMBER'\nI'm going to guess a number that you are going to think of.\n";
	cout << "The are going to be three cases : \n";
	cout << "1. Too high 2. Too low 3. That is my number\n";
	cout << "\nPress enter to play!.";
	cin.ignore();
}

int getRandNumber(int rangeMin, int rangeMax){
	random_device rd; // Random number from hardware
	mt19937 eng(rd()); // Seed the generator
	uniform_int_distribution<> distr(rangeMin, rangeMax); // Define the range
	return distr(eng);
}
