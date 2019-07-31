/*
 * C++ How To Program - 2.9 : Exercise Statements.
 *
 * Write a single C++ statement or line that accomplishes each of the following:
 *
 * a) Print the message "Enter two numbers".
 * b) Assign the product of variables 'b' and 'c' to variable 'a'.
 * c) State that a program performs a payroll calculation.
 * d) Input three integer values from the keyboard into integer variables
 *	'a', 'b' and 'c'.
*/

// Performs a payroll calculation c)
#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	cout << "Enter two numbers : "; // a)
	cin >> b >> c; // b)
	a = b * c;
	cout << "Enter three numbers : ";
	cin >> a >> b >> c; // d)
	return 0;
}
