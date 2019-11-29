/*
  * C++ How to Program - 4.28 : Checkboard Pattern.
  * Description in txt file.
*/

#include <iostream>

// Avoid magic numbers
const int TEN = 10;
const int TWO = 2;
const char ASTERISK = '*';
const char SPACE = ' ';

int main(){
	for(int i = 0; i < TEN; i++){
		if(i % TWO == 0){
			for(int j = 0; j < TEN; j++){
				std::cout << ASTERISK << SPACE;
			}
			std::cout << std::endl;
		}else{
			for(int j = 0; j < TEN; j++){
				std::cout << SPACE << ASTERISK;
			}
			std::cout << std::endl;
		}
	}
	
	return 0;
}