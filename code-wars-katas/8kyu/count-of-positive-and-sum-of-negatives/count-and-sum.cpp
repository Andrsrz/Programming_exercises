/*
 * Code Wars - 8 Kyu Kata : Count Positives and Sum Negatives.
 * Description in txt file.
*/

#include <iostream>
#include <vector>

// Function declaration
std::vector<int> countPositivesSumNegatives(std::vector<int>);

int main(){
	std::vector<int> vect {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15};
	std::vector<int> result;
	result = countPositivesSumNegatives(vect);

	std::cout << "[ ";
	for(int i = 0; i < result.size(); i++){
		std::cout << result[i] << " ";
	}
	std::cout << "]" << std::endl;

	return 0;
}

// Function implementation
std::vector<int> countPositivesSumNegatives(std::vector<int> input){
	int positiveCount = 0;
	int negativeSum = 0;
	std::vector<int> result;
  
	if(input.size() == 0){
		return result;
	}

	for(int i = 0; i < input.size(); i++){
		if(input[i] > 0){
			positiveCount++;
		}else if(input[i] < 0){
			negativeSum += input[i];
		}
	}

	result.push_back(positiveCount);
	result.push_back(negativeSum);

	return result;
}
