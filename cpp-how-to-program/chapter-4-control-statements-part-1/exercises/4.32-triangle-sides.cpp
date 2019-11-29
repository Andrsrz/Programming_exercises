/*
  * C++ How to Program - 4.32 Sides of a Triangle.
  * Description in txt file.
*/

#include <iostream>

int main(){
	double a = 0;
	double b = 0;
	double c = 0;
	
	// Check user input
	while( ( a == 0 ) && ( b == 0 ) && ( c == 0 ) ){
		std::cout << "Enter three nonzero values : ";
		std::cin >> a >> b >> c;	
	}
	
	// Triangle formulas
	if( ( ( a + b ) > c ) && ( ( a + c ) > b ) && ( ( b + c ) > a ) ){
		std::cout << "Yes. This is a triangle!." << std::endl;
	}else{
		std::cout << "No. This is not a triangle!." << std::endl;
	}

	return 0;
}
