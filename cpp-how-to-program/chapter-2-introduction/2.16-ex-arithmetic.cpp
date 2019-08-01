/*
 * C++ How To Program - 2.16 : Arithmetic
 *
 * Write a program that ask the user to enter two numbers, obtains the two numbers
 * from the user and prints the sum, product, difference and quotient of the two
 * numbers.
*/

#include <iostream>
using namespace std;

int main(){
	float x, y;
	cout << "Enter two numbers : ";
	cin >> x >> y;
	cout << "The sum of " << x << " and " << y << " is : " << x + y << endl;
	cout << "The product of " << x << " and " << y << " is : " << x * y << endl;
	cout << "The difference of " << x << " and " << y << " is : " << abs(x - y) << endl;
	cout << "The quotient of " << x << " and " << y << " is : " << x / y << endl;
	return 0;
}
