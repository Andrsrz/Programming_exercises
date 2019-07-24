/*
 * r/dailyprogrammer - Challenge 1 : Print user input in some format.
 *
 * Create a program that will ask the user's name, agre and reddit username.
 * Have it tell them the information back in the format:
 * 'your name is ___, you are ___ years old, and your username is ___'
 * For extra credit have the program log this in a file to be accessed later.
*/

#include <iostream>
#include <fstream>
using namespace std;

// Function declaration
int writeFile(string name, int age, string redditUsername);

int main(){
 	string name = "";
	int age = 0;
	string redditUsername = "";

	// User input
	cout << "Enter your name : ";
	cin >> name;
	cout << "Enter your age : ";
	cin >> age;
	cout << "Enter your reddit username : ";
	cin >> redditUsername;
	cout << std::endl;

	// Write file
	writeFile(name, age, redditUsername);
	
	return 0;
}

int writeFile(string name, int age, string redditUsername){
	ofstream myFile;
	string myFileName = "reddit-user-info.txt";
	
	myFile.open(myFileName);
	cout << "Wrinting file ... " << endl;
	myFile << "Your name is " << name << ", you are " << age << " years old, and your username is " << redditUsername << ".";
	myFile.close();
	cout << "Done!" << endl;

	return 0;
}
