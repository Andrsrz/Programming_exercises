/*
  * C++ How to Program - 4.33 Sides of a Right Triangle.
  * Description in txt file.
*/

#include <iostream>

int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	
	// Check user input
	while( ( a == 0 ) && ( b == 0 ) && ( c == 0 ) ){
		std::cout << "Enter three nonzero values." << std::endl;
		std::cout << "a : ";
		std::cin >> a;
		std::cout << "b : ";
		std::cin >> b;
		std::cout << "c : ";
		std::cin >> c;
	}
	
	// Pythagoras' Theorem
	if( ( c * c ) == ( ( a * a ) + ( b * b ) ) ){
		std::cout << "Yes. This is a right triangle!." << std::endl;
	}else{
		std::cout << "No. This is not a right triangle!." << std::endl;
	}

	return 0;
}
