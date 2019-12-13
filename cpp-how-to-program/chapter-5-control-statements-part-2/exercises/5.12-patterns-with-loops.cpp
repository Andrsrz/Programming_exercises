/*
 * C++ How To Program - 5.12 : Drawing Patterns with Nested for Loops.
 * Description in txt file.
*/

#include <iostream>

const char ASTERISK = '*';
const char SPACE = ' ';
const char RETURN = '\r';
const char NEW_LINE = '\n';
// Avoid magic numbers
const int TWO = 2;
const int TEN = 10;

int main(){
	// A
	std::cout << "A :" << std::endl;
	for(int row = 1; row <= TEN; row++){
		for(int asterisks = 0; asterisks < row; asterisks++){
			std::cout << ASTERISK;
		}
		std::cout << NEW_LINE;
	}
	// B
	std::cout << "B :" << std::endl;
	for(int row = 1; row <= TEN; row++){
		for(int asterisks = TEN; asterisks >= row; asterisks--){
			std::cout << ASTERISK;
		}
		std::cout << NEW_LINE;
	}
	// C
	std::cout << "C :" << std::endl;
	for(int row = 1; row <= TEN; row++){
		for(int spaces = TWO; spaces <= row; spaces++){
			std::cout << SPACE;
		}
		for(int asterisks = TEN; asterisks >= row; asterisks--){
			std::cout << ASTERISK;
		}
		std::cout << NEW_LINE;
	}
	return 0;
}
