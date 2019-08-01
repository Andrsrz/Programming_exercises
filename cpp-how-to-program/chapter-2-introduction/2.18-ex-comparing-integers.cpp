/*
 * C++ How To Program - 2.18 : Exercise Comparing Integers
 *
 * Write a program that asks the user to enter two integers, obtains the numbers from the user,
 * then prints the larger number followed by the words 'is larger'. If the numbers are equal,
 * print the message 'These numbers are equal'.
*/

#include <iostream>
using namespace std;

int main(){
	int a, b;
	cout << "Please enter two integers : ";
	cin >> a >> b;
	if(a > b){
		cout << a << " is larger\n";	
	}else if(b > a){
		cout << b << " is larger\n";	
	}else if(a = b){
		cout << "These numbers are equal\n";
	}
	return 0;
}
