/*
 * C++ How To Program - 2.4 : More Statements
 *
 * Write a statement (or comment) to accomplish each of the following (assume that
 * 'using' directives have been used for 'cin', 'cout' and 'endl'):
 *
 * a) State that a program calculates the product of three integers.
 * b) Declare the variables 'x', 'y', 'z' and 'result' to be type 'int'
 *	(in separete statements).
 * c) Prompt the user to enter three integers.
 * d) Read three integers from the keyboard and store then in variables 'x', 'y' and 'z'.
 * e) Compute the product of the three integers contained in variables 'x', 'y' and 'z',
 *	and assign the result to the variable 'result'.
 * f) Print "The product is " followed by the value of the variable 'result'.
 * g) Return a value from main indicating that the program terminated successfully.
*/

// Calculates the product of three integers. a)
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	int x;
	int y;
	int z;
	int result; // b)

	cout << "Calculate the product of three integers!.\nEnter three integers : "; // c)
	cin >> x >> y >> z; // d)

	result = x * y * z; // e)

	cout << "The product is " << result << endl; // f)

	return 0; // g)
}
