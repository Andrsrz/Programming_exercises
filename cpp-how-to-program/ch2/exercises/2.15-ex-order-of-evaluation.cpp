/*
 * C++ How To Program - 2.15 : Exercise Order of Evaluation
 *
 * State the order of evaluation of the operations in each of the following
 * C++ statements and show the value of 'x' after each statement is performed.
*/

#include <iostream>
using namespace std;

int main(){
	int x;
	x = 7 + 3 * 6 / 2 - 1;
	// From left to right -> *, /, +, -
	cout << x << endl;
	// From left to right %, *, /, +, -
	x = 2 % 2 + 2 * 2 - 2 / 2;
	cout << x << endl;
	// The innermost parentheses first and from left to right %, *, /, +, -
	x = ( 3 * 9 * ( 3 + ( 9 * 3 / ( 3 ) ) ) );
	cout << x << endl;
	return 0;
}
