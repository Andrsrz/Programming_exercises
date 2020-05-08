/*
 * C++ How To Program - 6.26 : Celsius and Fahrenheit Temperatures.
 * Description in txt file.
 */

#include <iostream>

/* Function declaration */
float calculateFtoC(float fahrenheit);
float calculateCtoF(float celsius);

int main(){
	for(int i = 1; i <= 100; i++){
		std::cout << i << "C° --- " << calculateCtoF(i) << "F°" << std::endl;
	}
	for(int i = 32; i < 212; i++){
		std::cout << i << "F° --- " << calculateFtoC(i) << "C°" << std::endl;
	}
	return 0;
}

/* Function implementation */
float calculateFtoC(float fahrenheit){ return ((fahrenheit - 32) * 5/9); }
float calculateCtoF(float celsius){ return ((celsius * 9/5) + 32); }
