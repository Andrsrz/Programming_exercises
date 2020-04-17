/*
 * C++ How To Program - 2.20 : Exercise Diameter, Circumference and Area of a Circle
 *
 * Write a program that reads in the radius of a circle as an integer and prints the
 * circle's diameter, circumference and area. Use the constant value '3.14159' for 'pi'.
 * Do all calculations in output statements. [Note: In this chapter, we've discussed only
 * integer, constants and variables. In Chapter 4 we discuss floating-point numbers, i.e.,
 * values that can have decimal points.]
*/

#include <iostream>
using namespace std;

// Avoid magic numbers
const int PI = 3.14159;
const int TWO = 2;

int main(){
	int radius, diameter, circumference, area;
	cout << "Please enter the radius of the circle : ";
	cin >> radius;
	cout << "Circle's diameter : " << radius * TWO << endl;
	cout << "Circle's circumference : " << TWO * PI * radius << endl;
	cout << "Circle's area : " << PI * ( radius * radius ) << endl;
	return 0;
}
