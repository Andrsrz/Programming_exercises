/*
  * C++ How to Program - 4.20 : Validate user input.
  * Description in txt file.
*/

#include <iostream>

// Avoid magic numbers
const int TEN = 10;
const int TWO = 2;

int main(){
	int passes = 0;
	int failure = 0; 
	int studentCounter = 1;
	int result = 0;
	
	while( studentCounter <= TEN ){
		while( result != 1 && result != 2 ){
			result = 0;
			std::cout << "Enter result (1 = pass, 2 = fail) : ";
			std::cin >> result;
		}
		
		if( result == 1 ){
			passes++;
		}else{
			failure++;
		}
		
		result = 0;
		studentCounter++;
	}
	
	std::cout << "Passed " << passes << "\nFailed " << failure << std::endl;
	
	if(  passes > 8 ){
		std::cout << "Bonus to instructor!\n" << std::endl;
	}
	
	return 0;	
}
