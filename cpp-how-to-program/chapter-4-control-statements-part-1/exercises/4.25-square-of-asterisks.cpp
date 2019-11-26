/*
  * C++ How to Program - 4.25 : Square of asterisks
  * Description in txt file.
*/

#include <iostream>

const int TWO = 2;
const int TWENTY = 20;
const char SPACE = ' ';
const char ASTERISK = '*';
const char NEW_LINE = '\n';

int main(){
	int userInput = 0;
	
	while( userInput < 1 || userInput > TWENTY ){
		userInput = 0;
		std::cout << "Enter a positive integer between 1 and 20 : ";
		std::cin >> userInput;
	}
	
	// First row
	for(int i = 0; i < userInput; i++){
		std::cout << ASTERISK;
	}
	std::cout << NEW_LINE;
	
	// Inner rows
	for(int i = TWO; i < userInput; i++){
		std::cout << ASTERISK;
		for(int i = TWO; i < userInput; i++){
			std::cout << SPACE;
		}
		std::cout << ASTERISK << NEW_LINE;
	}
	
	// Last row
	for(int i = 0; i < userInput; i++){
		std::cout << ASTERISK;
	}
	
	return 0;
}
