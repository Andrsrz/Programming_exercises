/*
 * C++ How To Program - 2.25 : Exercise Multiples
 *
 * Write a program that reads in two integers and determines and prints if the first is a multiple of the second.
 * [Hint: Use the modulus operator.]
*/

#include <iostream>
using namespace std;

// Function declaration
bool isMultiple(int x, int y);

int main(){
	int x, y;
	cout << "Enter two integers.\nI'm going to check if the first is multiple of the second : ";
	cin >> x >> y;
	cout << "1 : TRUE\n0 : FALSE\nOUTPUT : " << isMultiple(x, y) << endl;
	return 0;
}

bool isMultiple(int x, int y){
	if( ( x % y ) == 0 ){
		return true;
	}else{
		return false;
	}
}
