/*
  * C++ How to Program - 4.18 : Tabular Output.
  * Description in txt file.
*/

#include <iostream>

// Avoid magic numbers
const int FIVE = 5;
const int TEN = 10;
const int HUNDRED = 100;
const int THOUSAND = 1000;

int main(){
	int i = 1;
	
	std::cout << "N\t10*N\t100*N\t1000*N\n" << std::endl;
	while( i <= FIVE ){
		std::cout << i << "\t" << TEN * i << "\t" << HUNDRED * i << "\t" << THOUSAND * i << std::endl;	
		i++;
	}
	
	return 0;
}