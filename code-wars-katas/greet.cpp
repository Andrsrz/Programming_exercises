/*
 * Code Wars : Kata - Greet
*/

#include <iostream>
#include <string>

// Function declaration
std::string greet(const std::string&);

int main(){
	std::string str = "";
	
	std::cout << "Enter your name : ";
	std::cin >> str;
	std::cout << greet(str) << std::endl;

	return 0;
}

// Function implementation
std::string greet(const std::string& n){
	return "Hello, " + n + " how are you doing today?";
}
