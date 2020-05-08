/*
 * Daily Coding Problem - Problem #47 Easy 
*/

#include <iostream>
#include <vector>

// Avoid magic numbers
const int TWO = 2;

// Function declaration
int calculateMaximumProfit(std::vector<int>);

int main(){
	std::vector<int> arr {9,11,8,5,7,10};
	std::cout << calculateMaximumProfit(arr) << std::endl;

	return 0;
}

// Function implementation
int calculateMaximumProfit(std::vector<int> stock){
	int maximumProfit = 0;
	
	if(stock.size() >= TWO){
		int minimumStock = stock[0], maximumStock = 0;
		int profit = 0;

		for(int i = 0; i < stock.size(); i++){
			maximumStock = stock[i + 1];

			if(minimumStock >= stock[i]){
				minimumStock = stock[i];
			}
			
			profit = maximumStock - minimumStock;
			// std::cout << maximumStock << " - " << minimumStock << " = " << profit << std::endl;
			
			if(maximumProfit <= profit){
				maximumProfit = profit;
			}
		}
	}

	return maximumProfit;
}
