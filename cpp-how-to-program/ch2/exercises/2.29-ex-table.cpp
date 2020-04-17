/*
 * C++ How To Program - 2.29 : Exercise Table
 *
 * Using the techniques of this chapter, write a program that calculates the squares and
 * cubes of the integers from 0 to 10. Use tabs to print the following neatly formatted table of values.
*/

#include <iostream>
using namespace std;

// Avoid magic numbers : 
const int TWO = 2;
const int THREE = 3;
const int FOUR = 4;
const int FIVE = 5;
const int SIX = 6;
const int SEVEN = 7;
const int EIGHT = 8;
const int NINE = 9;
const int TEN = 10;

int main(){
	cout << "integer\tsquare\tcube" << endl;
	cout << 0 << "\t" << 0 * 0 << "\t" << 0 * 0 * 0 << endl;
	cout << 1 << "\t" << 1 * 1 << "\t" << 1 * 1 * 1 << endl;
	cout << TWO << "\t" << TWO * TWO << "\t" << TWO * TWO * TWO << endl;
	cout << THREE << "\t" << THREE * THREE << "\t" << THREE * THREE * THREE << endl;
	cout << FOUR << "\t" << FOUR * FOUR << "\t" << FOUR * FOUR * FOUR << endl;
	cout << FIVE << "\t" << FIVE * FIVE << "\t" << FIVE * FIVE * FIVE << endl;
	cout << SIX << "\t" << SIX * SIX << "\t" << SIX * SIX * SIX << endl;
	cout << SEVEN << "\t" << SEVEN * SEVEN << "\t" << SEVEN * SEVEN * SEVEN << endl;
	cout << EIGHT << "\t" << EIGHT * EIGHT << "\t" << EIGHT * EIGHT * EIGHT << endl;
	cout << NINE << "\t" << NINE * NINE << "\t" << NINE * NINE * NINE << endl;
	cout << TEN << "\t" << TEN * TEN << "\t" << TEN * TEN * TEN << endl;
	return 0;
}
