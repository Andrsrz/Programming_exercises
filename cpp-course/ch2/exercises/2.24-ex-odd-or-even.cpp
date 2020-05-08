/*
 * C++ How To Program - 2.24 : Exercise Odd or Even
 *
 * Write a program that reads an integer and determines and prints wheter it's odd or even
 * [Hint: Use the modulus operator. An even number is a multiple of two. Any multiple of two
 * leaves a remainder of zero when divided by 2.]
*/

#include <iostream>
using namespace std;

// Avoid magic numbers
const int TWO = 2;

int main(){
	int x;
	cout << "Enter an integer to check if it's odd or even : ";
	cin >> x;
	if( ( x % TWO ) == 0){
		cout << x << " is even." << endl;
	}else{
		cout << x << " is odd." << endl;
	}
	return 0;
}
