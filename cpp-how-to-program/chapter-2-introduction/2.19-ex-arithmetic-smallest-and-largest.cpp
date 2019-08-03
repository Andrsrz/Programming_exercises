/*
 * C++ How To Program - 2.19 : Exercise Arithmetics, Smallest and Largest.
 *
 * Write a program that inputs three integers from the keyboard and prints the sum,
 * average, product, smallest, and largest of these numbers. The screen dialog should appears as follows:
 *
 * Input three different integers: 12 27 14
 * Sum is 54
 * Average is 18
 * Product is 4914
 * Smallest is 13
 * Largest is 27
*/

#include <iostream>
using namespace std;

// Avoid magic numbers
const int AVERAGE = 3;

int main(){
	int x, y, z;
	cout << "Input three different integers : ";
	cin >> x >> y >> z;
	cout << "Sum is " << x + y + z << endl;
	cout << "Average is " << ( x + y + z ) / AVERAGE << endl;
	cout << "Product is " << x * y * z << endl;
	if(x > y && x > z){
		if(y > z){
			cout << "Smallest is " << z << endl;
			cout << "Largest is " << x << endl;
		}else{
			cout << "Smallest is " << y << endl;
			cout << "Largest is " << x << endl;
		}
	}else if(y > x && y > z){
		if(x > z){
			cout << "Smallest is " << z << endl;
			cout << "Largest is " << y << endl;
		}else{
			cout << "Smallest is " << x << endl;
			cout << "Largest is " << y << endl;
		}
	}else if(z > x && z > y){
		if(x > y){
			cout << "Smallest is " << y << endl;
			cout << "Largest is " << z << endl;
		}else{
			cout << "Smallest is " << x << endl;
			cout << "Largest is " << z << endl;
		}
	}
	return 0;
}
