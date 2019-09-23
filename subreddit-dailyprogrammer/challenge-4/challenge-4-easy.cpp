/*
 * r/dailyprogrammer - Challenge 4 Easy : Random password generator
 * Description in txt file
*/

#include <iostream>
#include <random>
#include <vector>
#include <string>

// Avoid magic numbers
const int MIN_RANGE = 33;
const int MAX_RANGE = 126; // ASCII codes
const int HOW_MANY_PASSWORDS = 3;
const int PASSWORD_LENGTH = 15;

// Function declaration
std::vector<std::string> generatePassword(int, int);

int main(){
	std::vector<std::string> passwords;
	passwords = generatePassword(HOW_MANY_PASSWORDS, PASSWORD_LENGTH);

	for(int i = 0; i < passwords.size(); i++){
		std::cout << passwords[i] << std::endl;
	}

	return 0;
}

// Function implementation
std::vector<std::string> generatePassword(int howManyPasswords, int passLength){
	std::vector<std::string> passwords;

	for(int i = 0; i < howManyPasswords; i++){
		std::string pass = "";
		// Generate password
		for(int j = 0; j < passLength; j++){
			std::random_device rd; // Obtain random number from hardware
			std::mt19937 eng(rd()); // Seed the generator
			std::uniform_int_distribution<> distr(MIN_RANGE, MAX_RANGE); // Define range
			pass += char(distr(eng)); // Creating password
		}
		// Add password to array
		passwords.push_back(pass);
	}

	return passwords;
}
