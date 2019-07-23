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

int main(){
 	std::string name = "";
	int age = 0;
	std::string redditUsername = "";
	std::ofstream myFile;
	std::string myFileName = "reddit-user-info.txt";

	std::cout << "Enter your name : ";
	std::cin >> name;
	std::cout << "Enter your age : ";
	std::cin >> age;
	std::cout << "Enter your reddit username : ";
	std::cin >> redditUsername;
	std::cout << std::endl;

	myFile.open(myFileName);
	std::cout << "Your name is " << name << ", you are " << age << " years old, and your username is " << redditUsername << "." << std::endl;
	std::cout << "Wrinting file ... " << std::endl;
	myFile << "Your name is " << name << ", you are " << age << " years old, and your username is " << redditUsername << ".";
	std::cout << "Done." << std::endl;
	myFile.close();
	
	return 0;
}
