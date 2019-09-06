/*
 * Code Wars : Kata - Even or Odd
*/

#include <iostream>
#include <string>

// Avoid magic numbers
const int TWO = 2;
const std::string ODD = "Odd";
const std::string EVEN = "Even";

// Function declaration
std::string evenOrOdd(int);

int main(){
	std::cout << evenOrOdd(15);

	return 0;
}

// Function implementation
std::string evenOrOdd(int number){
	if((number % TWO) == 0){
		return EVEN;
	}else{
		return ODD;
	}

	return "";
}
