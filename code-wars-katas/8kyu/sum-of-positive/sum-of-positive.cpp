/*
 * Code Wars : Kata - Sum of Positive
*/

#include <iostream>
#include <vector>

// Function declaration
int positiveSum(std::vector<int>);

int main(){
	std::vector<int> arr{5, -100, 54, -87, 15};
	std::cout << positiveSum(arr);

	return 0;
}

// Function implementation
int positiveSum (std::vector<int> arr){
	int sum = 0;
	
	for(int i = 0; i < arr.size(); i++){
		if(arr[i] > 0){
			sum = sum + arr[i];
		}
	}

	return sum;
}
