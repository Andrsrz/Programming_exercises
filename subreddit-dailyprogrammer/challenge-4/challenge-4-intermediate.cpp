/*
 * r/dailyprogrammer - Challenge 4 Intermediate : Terminal calculator
 * Description in txt file
*/

#include <iostream>
#include <string>

// Avoid magic numbers
const int TWO = 2;
const int THREE = 3;
const char PLUS = '+';

// Function declaration
int makeOperation(std::string);
int makeAddition(int, int);
int makeSubtraction(int, int);
int makeDivision(int, int);
int makeMultiplication(int, int);

int main(){
	bool menu = true;

	std::cout << "\tWelcome to Terminal Calculator!\n";
	while(menu){
		// MENU
		std::string option = "";
		std::cout << "Enter any operation ( If you want to quit type : quit )"
			<< "\n > ";
		std::getline(std::cin, option);

		if(option == "quit"){
			// EXIT
			menu = false;
		}else{
			if(option.size() >= THREE){
				std::cout << " < " << makeOperation(option) << std::endl;
			}else{
				std::cout << "\tPlease enter a valid operation!\n" << std::endl;
			}
		}
	}

	return 0;
}

// Function implementation
int makeOperation(std::string operation){
	int result = 0;

	for(int i = 0; i < operation.size(); i++){
		// Get only the operation character
		if(i % TWO != 0){
			if(operation[i] == PLUS){
				result += makeAddition((int)operation[i--] - '0', (int)operation[++i] - '0');
			}
		}
	}

	return result;
}

int makeAddition(int first, int second){
	int addition = 0;
	std::cout << first << " " << second << "\t";
	addition = first + second;
	return addition;
}

int makeSubtraction(int first, int second){
	return 0;
}

int makeDivision(int first, int second){
	return 0;
}

int makeMultiplication(int first, int second){
	return 0;
}
