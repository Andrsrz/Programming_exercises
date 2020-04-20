/*
 * C++ How To Program - 6.28 : Perfect Numbers.
 * Description in txt file.
 */

#include <iostream>

/* Function declaration */
bool isPerfect(int number);

int main(){
	std::cout << "6 is perfect! " << isPerfect(6) << std::endl;
	return 0;
}

/* Function implementation */
bool isPerfect(int number){
	int total = 0;

	if(number <= 0){
		return false;
	}

	for(int i = (number - 1); i > 0; i--){
		if((number % i) == 0){
			total += i;
		}
	}

	return (number == total);
}
