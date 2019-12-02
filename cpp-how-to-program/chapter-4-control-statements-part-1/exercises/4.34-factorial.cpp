/*
  * C++ How to Program - 4.34 Factorial.
  * Description in txt file.
*/

#include <iostream>
#include <iomanip> // Fixed and setprecision
#include <cmath> // Pow

// Function declaration
double makeFactorial(double);
double makeE(double);
double makeEToX(double, double);

int main(){
	double number = 0;
	double e = 0; // Mathematical constant
	double eToX = 0; // Mathematical constan
	double x = 0;

	while( number == 0 ){
		std::cout << "Enter a non negative integer : ";
		std::cin >> number;
	}

	std::cout << number << "! : " << makeFactorial(number) << std::endl;

	while( e == 0){
		std::cout << "Enter desired accuracy for mathematical constant 'e' : ";
		std::cin >> e;
	}

	/* The following two statements are to fix the printing precision */
	std::cout << std::fixed;
	std::cout << std::setprecision(e);
	std::cout << "e : " << makeE(e) << std::endl;

	while( eToX == 0 && x == 0 ){
		std::cout << "Enter exponential number for mathematical constant 'e^x' : ";
		std::cin >> x;
		std::cout << "Enter desired accuracy for mathematical constant 'e^x' : ";
		std::cin >> eToX;
	}

	/* The following two statements are to fix the printing precision */
	std::cout << std::fixed;
	std::cout << std::setprecision(eToX);
	std::cout << "e^" << x << " : " << makeEToX(x, eToX) << std::endl;
		
	return 0;
}

// Function implementation
double makeFactorial(double number){
	double factorial = 1;
	
	// The formula is : n! = n * ( n - 1 ) * ( n - 2 ) * ... * 1
	for(int i = 0; i < number; i++){
		factorial *= (number - i);
	}

	return factorial;
}

double makeE(double accuracy){
	double e = 1;
	
	// The formula is : e = 1 + ( 1 / 1! ) + ( 1 / 2! ) + ( 1 / 3! ) + ...
	for(int i = 1; i <= accuracy; i++){
		double denominator = 1;
		// Get denominator
		for(int j = 0; j < i; j++){
			denominator *= ( i - j );
		}
		e += ( 1 / denominator );
	}
	
	return e;
}

double makeEToX(double exponent, double accuracy){
	double eToX = 1;

	// The formula is : e = 1 + ( x / 1! ) + ( x² / 2! ) + ( x³ / 3! ) + ...
	for(int i = 1; i <= accuracy; i++){
		double denominator = 1;
		// Get denominator
		for(int j = 0; j < i; j++){
			denominator *= ( i - j );
		}
		eToX += ( pow( exponent, i ) / denominator );
	}

	return eToX;
}
