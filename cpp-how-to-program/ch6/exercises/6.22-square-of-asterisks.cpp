/*
 * C++ How To Program - 6.22 : Square of Asterisks.
 * Description in txt file.
 */

#include <iostream>

const char ASTERISK = '*';
const char NEW_LINE = '\n';

/* Function declaration */
void printAsterisks(int size);

int main(){
	int size = 0;
	std::cout << "Enter a number : ";
	std::cin >> size;
	printAsterisks(size);
	return 0;
}

/* Function implementation */
void printAsterisks(int size){
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			std::cout << ASTERISK;
		}
		std::cout << NEW_LINE;
	}
}
