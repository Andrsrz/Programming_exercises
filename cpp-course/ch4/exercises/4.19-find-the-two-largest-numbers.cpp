/*
  * C++ How to Program - 4.19 : Find the Two Largest Numbers.
  * Description in txt file.
*/

#include <iostream>

// Avoid magic numbers
const int TEN = 10;

int main(){
	int counter = 0;
	int firstLargest = 0;
	int secondLargest = 0;
	int cache = 0;
	
	while( counter < TEN ){
		int number = 0;
		std::cout << "Enter an integer : ";
		std::cin >> number;
		
		if( number > secondLargest ){ // Check second largest number first
			/*
			 * This condition is to force that the first largest number
			 * and second largest number will never be the same.
			*/
			if( number != firstLargest ){
				cache = firstLargest; // Keep the largest number as 'cache'
				secondLargest = number; // Get second largest number
				if( secondLargest > firstLargest ){
					firstLargest = secondLargest; // Get first largest number
					secondLargest = cache; // Retrive 'cache' value
				}
			}
		}
		
		// Output
		std::cout << "Current number : " << number << std::endl;
		std::cout << "First Largest number : " << firstLargest << std::endl;
		std::cout << "Second Largest number : " << secondLargest << std::endl;
		
		counter++;
	}
	
	return 0;
}
