/*
 * C++ How To Program - 2.17 : Printing
 *
 * Write a program that prints the numbers 1 to 4 on the same line with
 * each pair of adjacent numbers separeted by one space. Do this several ways:
 *
 * a) Using one statement with one stream insertion operator.
 * b) Using one statement with four stream insertion operator.
 * c) Using four statements.
*/

#include <iostream>
using namespace std;

int main(){
	cout << "1 2 3 4\n"; // a)
	cout << "1" << " 2" << " 3" << " 4\n"; // b)
	cout << "1";
	cout << " 2";
	cout << " 3";
	cout << " 4\n";
	return 0;
}
