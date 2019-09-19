/*
 * Code Wars - Kata : 6kyu Validate Credit Card Number
*/

#include <iostream>
#include <vector>

// Avoid magic numbers
const int TWO = 2;
const int NINE = 9;
const int TEN = 10;
const int SIXTEEN = 16;

// Function declaration
bool isValidCreditCardNumber(std::vector<int>);

int main(){
	// Change array up to 16 positions
	std::vector<int> myCard {};
	
	std::cout << isValidCreditCardNumber(myCard) << std::endl;

	return 0;
}

// Function implementation
bool isValidCreditCardNumber(std::vector<int> creditCard){
	bool isValid = false;
	std::vector<int> array {};
	int sum = 0;

	// The array size is even or odd?
	if(creditCard.size() % TWO == 0){
		// Is even
		// Loop through the array
		for(int i = 0; i < creditCard.size(); i++){
			// Change only the even position numbers
			if(i % TWO == 0){
				int number = creditCard[i] * TWO;
				// Check if it's greater than nine
				if(number > NINE){
					number -= NINE;
					array.push_back(number);
				}else{
					array.push_back(number);
				}
			}else{
				array.push_back(creditCard[i]);
			}
		}
	}else{
		// Is odd
		// Loop through the array
		for(int i = 0; i < creditCard.size(); i++){
			// Change only the odd position numbers
			if(i % TWO != 0){
				int number = creditCard[i] * TWO;
				// Check if it's greater than nine
				if(number > NINE){
					number -= NINE;
					array.push_back(number);
				}else{
					array.push_back(number);
				}
			}else{
				array.push_back(creditCard[i]);
			}
		}
	}

	// The sum of the array digits is divisible by ten?
	// Loop through the new array
	for(int i = 0; i < array.size(); i++){
		sum += array[i];
	}

	if(sum % TEN == 0){
		// Yes
		isValid = true;
	}// No

	return isValid;
}
