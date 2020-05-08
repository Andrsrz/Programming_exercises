/*
 * Code Wars : Kata - Narcissistic Number
*/

#include <iostream>
#include <cmath> // pow()

// Avoid magic numbers
const int TEN = 10;

// Function declaration
bool narcissisticNumber(int);

int main(){
	std::cout << narcissisticNumber(153) << std::endl;
	return 0;
}

// Function implementation
bool narcissisticNumber(int value){
	int digits = 0, number = value, sum = 0;

	//i Get how many digits the number has.
	do{
		digits++;
	}while( number /= TEN );

	/*
	 * Get the sum of the value's own digits each raised
	 * to the power of the number of digits ( we get that above ).
	 * We loop through every digits of the number and raised them
	 * to the power of 'digits' and sum all of them.
	*/
	for(int i = 0; i < digits; i++){
		sum += pow( ( ( value/int( pow(TEN, i) ) ) % TEN ), digits );
	}

	if(sum == value){
		return true;
	}else{
		return false;
	}

	return true or false;
}
