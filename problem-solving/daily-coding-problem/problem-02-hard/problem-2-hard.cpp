/*
 * Daily Coding Problem : Problem #2 Hard
*/

#include <iostream>
#include <experimental/random>
#include <vector>

// Avoid magic numbers
const int MIN_RANGE = 3;
const int MAX_RANGE = 10;

// Function declaration
int getRandomNumber();
std::vector<int> getRandomList(int);
void printList(std::vector<int>);
std::vector<int> computeProductList(std::vector<int>);

// Main
int main(){
	int number = getRandomNumber();
	std::vector<int> list = getRandomList(number);
	printList(list);
	std::vector<int> productList = computeProductList(list);
	printList(productList);

	return 0;
}

// Function implementation
int getRandomNumber(){
	// Create random integer
	int randomNumber = std::experimental::randint(MIN_RANGE, MAX_RANGE);

	return randomNumber;
}

std::vector<int> getRandomList(int number){
	std::vector<int> list;

	// Create random vector of integers
	for(int i = 0; i <= number; i++){
		int randomNumber = std::experimental::randint(MIN_RANGE, MAX_RANGE);
		list.push_back(randomNumber);
	}

	return list;
}

void printList(std::vector<int> list){
	// Loop throught list to print it
	std::cout << "Array : [ ";
	for(int i = 0; i < list.size(); i++){
		std::cout << list[i] << " ";
	}
	std::cout << "]" << std::endl;
}

std::vector<int> computeProductList(std::vector<int> list){
	int product;
	std::vector<int> productList;

	/*
	 * Wee need a nested for to loop throught the list
	 * when the iterator variables are not the same we can
	 * do a product operation, in this way we know that
	 * we are not in the same position of the list.
	 * Finally we add that product to a new list in the
	 * correct position.
	*/
	for(int i = 0; i < list.size(); i++){
		product = 1; // Reset product
		for(int j = 0; j < list.size(); j++){
			if(i != j){
				product = product * list[j]; // Get product
			}
		}
		productList.push_back(product); // Add to new list
	}

	return productList;
}
