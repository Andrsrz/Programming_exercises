/*
 * C++ How To Program - 6.23 : Square of Any Character.
 * Description in txt file.
 */

#include <iostream>

const char NEW_LINE = '\n';

/* Function declaration */
void printAsterisks(char character,int size);

int main(){
	int size = 0;
	char character = '*';
	std::cout << "Enter a character : ";
	std::cin >> character;
	std::cout << "Enter a number : ";
	std::cin >> size;
	printAsterisks(character, size);
	return 0;
}

/* Function implementation */
void printAsterisks(char character, int size){
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			std::cout << character;
		}
		std::cout << NEW_LINE;
	}
}
