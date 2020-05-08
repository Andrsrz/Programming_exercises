/*
 * Code Wars : Kata - Remove Exclamation Marks
*/

#include<iostream>
#include<string>

// Function declaration
std::string removeExclamationMarks(std::string str);

int main(){
	std::string userStr;

	std::cout << "Enter a string with exclamation marks : ";
	std::cin >> userStr;
	std::cout << "String withtout exclamation marks : " << removeExclamationMarks(userStr) << std::endl;

	return 0;
}

std::string removeExclamationMarks(std::string str){
	std::string finalStr = "";

	/*
	 * Iterate through the given string and check for
	 * exclamation marks. If there are any, don't add to
	 * new string
	*/
	for(int i = 0; i < str.length(); i++){
		if(str[i] != '!'){
			finalStr = finalStr + str[i];
		}
	}

	return finalStr;
}
