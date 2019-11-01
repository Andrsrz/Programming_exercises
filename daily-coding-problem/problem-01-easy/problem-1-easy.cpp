/*
 * Daily Coding Problem : Problem #1 Easy
*/

#include <iostream>
#include <experimental/random>
#include <vector>

// Avoid magic numbers
const int TWO = 2;
const int HUNDRED = 100;

// Function declaration
int getRandomNumber();
std::vector<int> getRandomList(int);
void checkList(int, std::vector<int>);

int main(){
	int number = 0;
	std::vector<int> list;

	std::cout << "Computing ...\n" << std::endl;
	number = getRandomNumber();
	list = getRandomList(number);
	
	std::cout << "Random number : " << number << std::endl;
	std::cout << "Random list : [ ";
	for(int i = 0; i < list.size(); i++){
		std::cout << list[i] << " ";
	}
	std::cout << "]" << std::endl;

	checkList(number, list);

	return 0;
}

int getRandomNumber(){
	int randomNumber = std::experimental::randint(TWO, HUNDRED);

	return randomNumber;
}

std::vector<int> getRandomList(int number){
	std::vector<int> list;

	for(int i = 0; i <= number; i++){
		int randomNumber = std::experimental::randint(TWO, HUNDRED);
		list.push_back(randomNumber);
	}

	return list;
}

void checkList(int number, std::vector<int> list){
	bool isPrinted = false;

	for(int i = 0; i < list.size(); i++){
		for(int j = i; j < list.size(); j++){
			if( ( list[i] + list[j] ) == number ){
				std::cout << list[i] << " + " << list[j] << " = " << number << "." << std::endl;
				isPrinted = true;
			}
		}
	}

	if(!isPrinted){
		std::cout << "There aren't any matches" << std::endl;
	}
}
