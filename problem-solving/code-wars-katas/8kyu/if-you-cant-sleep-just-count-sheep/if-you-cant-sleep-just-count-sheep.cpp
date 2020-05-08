/*
 * Code Wars : Kata - If you can't sleep just count sheep
*/

#include <iostream>
#include <string>

// Function declaration
std::string countSheep(int);

int main(){
	std::cout << countSheep(15);
	return 0;
}

// Function implementation
std::string countSheep(int number){
	std::string count = "";

	for(int i = 1; i <= number; i++){
		count = count + std::to_string(i) + " sheep...";
	}

	return count;
}
