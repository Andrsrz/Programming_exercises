/*
 * Code Wars - Kata : Remove First and Last Character
 *
 * It's pretty straighforward. Your goal is to create a function that removes the first and last
 * character of a string. You're given one parameter, the original string. You don't have to worry
 * with strings with less than two characters.
*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// To avoid magic numbers.
const int TWO = 2;

// Function declaration.
string sliceString(string str);

// Main method.
int main(){
	string userInput = "";
	cout << "Please enter a string : ";
	cin >> userInput;
	cout << "Sliced string : ";
	cout << sliceString(userInput);
	cout << endl;
	return 0;
}

string sliceString(string str){
	// Check if string is longer than two characters.
	if(sizeof(str) <= TWO){
		return str;
	}

	string updatedStr = "";
	int strSize = str.length();
	// Create char array from string
	char strArray[strSize];
	strcpy(strArray, str.c_str());
	// Get max iteration depending of array size
	const int MAX_ITERATION = ((sizeof(strArray)/sizeof(*strArray))) - 1;

	// Get new string
	for(int i = 1; i < MAX_ITERATION; i++){
		updatedStr += strArray[i];
	}

	return updatedStr;
}
