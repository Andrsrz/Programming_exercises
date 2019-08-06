/*
 * C++ How To Program - 2.28 : Exercise Digits of an Integer.
 *
 * Write a program that inputs a five-digit integer, separates the integer into its digits and prints them
 * separated by three spaces each. [Hint: Use the integer division and modulus operators.]
 * For example, if the user types in 42339, the program should print: 4   2   3   3   9
*/

#include <iostream>
using namespace std;

// Avoid magic numbers :
const int TEN = 10;
const int HUNDRED = 100;
const int THOUSAND = 1000;
const int TEN_THOUSAND = 10000;

int main(){
	int userInput, digOne, digTwo, digThree, digFour, digFive;
	cout << "Enter a five digit integer : ";
	cin >> userInput;
	/*
	 * In this case we need to move the decimal point by one position to the left
	 * that's why we divide in the following order : 1, 10, 100 and so on.
	 * Then we make a modulo operation and we get the digit in the respective position.
	*/
	digFive = ( userInput / 1 ) % TEN;
	digFour = ( userInput / TEN ) % TEN;
	digThree = ( userInput / HUNDRED ) % TEN;
	digTwo = ( userInput / THOUSAND ) % TEN;
	digOne = ( userInput / TEN_THOUSAND ) % TEN;
	cout << digOne << "   " << digTwo << "   " << digThree << "   " << digFour << "   " << digFive << endl;
	return 0;
}
