/*
 * Code Wars : 7kyu Kata - Row Weights
 * Description in txt file.
*/

#include <iostream>
#include <vector>
#include <utility>

// Avpid maigc numbers
const int TWO = 2;
const int NUM1 = 13, NUM2 = 27, NUM3 = 49;
const int NUM4 = 100, NUM5 = 50, NUM6 = 51;

// Function declaration
std::pair<int, int> rowWeights(const std::vector<int> weights);

int main(){
	const std::vector<int> oddVector {NUM1, NUM2, NUM3};
	const std::vector<int> evenVector {NUM4, NUM5, NUM6, NUM4};
	std::pair<int, int> tupp;

	tupp = rowWeights(oddVector);
	std::cout << tupp.first << ", " << tupp.second << std::endl;
	tupp = rowWeights(evenVector);
	std::cout << tupp.first << ", " << tupp.second << std::endl;

	return 0;
}

// Function implementation
std::pair<int, int> rowWeights(const std::vector<int> weights){
	int totalTeam1 = 0, totalTeam2 = 0;
	std::pair<int, int> tupp;
	
	for(int i = 0; i < weights.size(); i++){
		if( ( i % TWO ) == 0 ){
			totalTeam1 += weights[i];
		}else{
			totalTeam2 += weights[i];
		}
	}

	tupp = std::make_pair(totalTeam1, totalTeam2);

	return tupp;
}
