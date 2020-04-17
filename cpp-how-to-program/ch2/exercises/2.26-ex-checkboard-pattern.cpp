/*
 * C++ How To Program - 2.26 : Exercise Checkboard Pattern
 *
 * Display the following checkerboard pattern with eight output statements, 
 * then display the same pattern using as few statements as possible.
*/

#include <iostream>
#include <string>
using namespace std;

const string FIRST_PATTERN = "* * * * * * * *";
const string SECOND_PATTERN = " * * * * * * * *";
// Avoid magic numbers :
const int MAX_ITERATIONS = 4;

int main(){
	// Eight statements :
	cout << FIRST_PATTERN << endl;
	cout << SECOND_PATTERN << endl;
	cout << FIRST_PATTERN << endl;
	cout << SECOND_PATTERN << endl;
	cout << FIRST_PATTERN << endl;
	cout << SECOND_PATTERN << endl;
	cout << FIRST_PATTERN << endl;
	cout << SECOND_PATTERN << endl;

	cout << endl;

	// Few as possible :
	for( int i = 0; i < MAX_ITERATIONS; i++ ){
		cout << FIRST_PATTERN << endl;
		cout << SECOND_PATTERN << endl;
	}

	return 0;
}
