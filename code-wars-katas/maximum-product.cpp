/*
 * Code Wars - Kata : Maximum Product.
 *
 * Given an array of integers find the maximum product obtained from multiplying 2 adjacent
 * number in the array.
 *
 * Array size is at least 2 and numbers could be a mixture of positive, negatives and zeroes.
*/

#include <iostream>
#include <vector>
#include <random>
using namespace std;

// Avoid magic numbers. Range to get random numbers.
const int RANGE_MIN = -100;
const int RANGE_MAX = 100;

// Function declaration
int getRandomNumber(int rangeMin, int rangeMax);
vector<int> getRandomArray(int sizeOfArray);
int adjacentElementsProduct(vector<int> inputArray);

int main(){
	int arraySize = 0;
	cout << "What size the array should be? : ";
	cin >> arraySize;
	cout << adjacentElementsProduct(getRandomArray(arraySize)) << endl;
	return 0;
}

int getRandomNumber(int rangeMin, int rangeMax){
	random_device rd; // Random number from hardware
	mt19937 eng(rd()); // Seed the generator
	uniform_int_distribution<> distr(rangeMin, rangeMax); // Define the range
	return distr(eng);
}

vector<int> getRandomArray(int sizeOfArray){
	vector<int> randomArray;
	cout << "Array : { ";
	for(int i = 0; i < sizeOfArray; i++){
		randomArray.push_back(getRandomNumber(RANGE_MIN, RANGE_MAX));
		cout << randomArray[i] << ", ";
	}
	cout << "}" << endl;
	return randomArray;
}

int adjacentElementsProduct(vector<int> inputArray){
	int maxProduct = RANGE_MIN; // To handle negative range
	int size = inputArray.size();
	int a, b;

	for(int i = 0; i < size; i++){
		a = inputArray[i];
		b = inputArray[i+1]; // Adjacent elements
		if((a * b) >= maxProduct){
			maxProduct = a * b; // Get maximum product
		}
	}

	return maxProduct;
}
