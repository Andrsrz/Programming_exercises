/*
 * Code Wars - Kata : Find Next Perfect Square
 *
 * Write a function that finds the next integral perfect square after the one passed as a parameter.
 * Recall that an integral perfect square is an integral 'n' such that 'sqrt(n)' is also an integer.
 *
 * If the parameter is itself not a perfect square, then '-1' should be returned. You may assume that
 * the parameter is positive.
*/

#include <iostream>
#include <cmath> // sqrt, fmod
using namespace std;

// To compere floating numbers.
const double EPSILON = 0.00000001;

// Function declaration
long int findNextPerfectSquare(long int sqr);
bool isEqual(double n1, double n2);

int main(){
	long int userInput;
	cin >> userInput;
	cout << findNextPerfectSquare(userInput);

	return 0;
}

long int findNextPerfectSquare(long int sqr){
	bool isSquare = false;
	double result = sqrt(sqr);
	result = fmod(result, 1);
	
	// Check user input to be a perfect square also compere floating numbers.
	if(!isEqual(result, 0)){
		isSquare = true;
	}
	
	if(isSquare){
		/* 
		 * Check following numbers to know which one is the next
		 * that has a perfect square.
		*/
		long int i = sqr;
		isSquare = false;
		do{
			i++;
			result = sqrt(i);
			result = fmod(result, 1);
			// Compere floating numbers and check perfect square.
			if(!isEqual(result, 0)){
				isSquare = true;
			}
		}while(!isSquare);
		return i;
	}else{
		return -1;
	}
}

// To compere floating numbers.
bool isEqual(double n1, double n2){
	return abs(n1 - n2) > EPSILON;
}
