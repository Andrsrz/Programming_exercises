/*
 * Code Wars : Kata - 6kyu Highest Scoring Word
*/

#include <iostream>
#include <vector>
#include <sstream>
#include <string>

const std::vector<char> ALPHABET { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

// Function declaration
std::string getHighestScoringWord(std::string);

int main(){
	std::string s = "man i need a taxi up to ubud";
	
	std::cout << getHighestScoringWord(s) << std::endl;

	return 0;
}

// Function implementation
std::string getHighestScoringWord(std::string str){
	std::string word = "";
	std::istringstream iss(str);
	int sum = 0, bigger = 0;

	while(iss){
		std::string subs;
		iss >> subs; // Get word in sentence
		if(subs.size() > 0){
			sum = 0;
			/*
			 * Loop through the letter's word and check
			 * in the alphabet and get it's value
			*/
			for(int i = 0; i < subs.size(); i++){
				for(int j = 0; j < ALPHABET.size(); j++){
					if(subs[i] == ALPHABET[j]){
						sum += (j + 1);
					}
				}
			}
		}

		// Get the highest scoring word
		if(sum > bigger){
			bigger = sum;
			word = subs;
		}
	}
	
	return word;
}
