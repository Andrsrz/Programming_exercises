/*
 * C++ How To Program - 5.12 : Drawing Patterns with Nested for Loops.
 * Description in txt file.
*/

#include <iostream>

const char ASTERISK = '*';
const char SPACE = ' ';
const char NEW_LINE = '\n';
// Avoid magic numbers
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
		for(int spaces = 1; spaces < row; spaces++){
			std::cout << SPACE;
		}
		for(int asterisks = TEN; asterisks >= row; asterisks--){
			std::cout << ASTERISK;
		}
		std::cout << NEW_LINE;
	}
	// D
	std::cout << "D :" << std::endl;
	for(int row = 1; row <= TEN; row++){
		for(int spaces = TEN; spaces > row; spaces--){
			std::cout << SPACE;
		}
		for(int asterisks = 0; asterisks < row; asterisks++){
			std::cout << ASTERISK;
		}
		std::cout << NEW_LINE;
	}
	return 0;
}
