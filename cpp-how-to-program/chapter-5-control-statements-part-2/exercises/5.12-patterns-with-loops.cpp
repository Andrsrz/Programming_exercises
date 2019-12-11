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
	for(int i = 1; i <= TEN; i++){
		for(int j = 0; j < i; j++){
			std::cout << ASTERISK;
		}
		std::cout << NEW_LINE;
	}
	return 0;
}
