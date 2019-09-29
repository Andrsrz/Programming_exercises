/*
 * Code Wars - 7kyu Kata : Exes and Ohs
 * Description in txt file.
*/

#include <iostream>
#include <string>

// Function declaration
bool XO(const std::string);

int main(){
	const std::string str1 = "ooxx", str2 = "xooxx";
	const std::string str3 = "ooxXm", str4 = "zpzpzpp";
	const std::string str5 = "zzoo";

	std::cout << XO(str1) << std::endl;
	std::cout << XO(str2) << std::endl;
	std::cout << XO(str3) << std::endl;
	std::cout << XO(str4) << std::endl;
	std::cout << XO(str5) << std::endl;

	return 0;
}

// Function implementation
bool XO(const std::string str){
	bool isSameAmount = false;
	const char x = 'x', X = 'X';
	const char o = 'o', O = 'O';
	int countX = 0, countO = 0;

	/*
	 * Loop trough string characters and check if are x's or o's
	 * If yes do a count++ in for the respective character.
	*/
	for(int i = 0; i < str.size(); i++){
		if( ( str[i] == x ) || ( str[i] == X ) ){
			countX++;
		}else if( ( str[i] == o ) || ( str[i] == O ) ){
			countO++;
		}
	}

	// Check if there are the same amount of x's and o's
	if(countX == countO){
		isSameAmount = true;
	}

	return isSameAmount;
}
