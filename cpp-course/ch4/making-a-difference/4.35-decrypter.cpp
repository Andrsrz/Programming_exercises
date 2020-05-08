/*
 * C++ How to Program - 4.35 Decrypter.
 * Description in txt file
 */

#include <iostream>
#include <algorithm>
#include <vector>

// Avoid magic numbers
const int TWO = 2;
const int THREE = 3;
const int FOUR = 4;
const int SIX = 6;
const int SEVEN = 7;
const int TEN = 10;

// Function declaration
bool checkNumberDigits(int);
std::vector<int> getEveryDigit(int);
std::vector<int> doDecryption(std::vector<int>);
void printVector(std::vector<int>);

int main(){
    int number = 0;
    std::cout << "Enter your four-digit encrypted number : ";
    std::cin >> number;

    if(checkNumberDigits(number)){
        std::vector<int> digits = getEveryDigit(number);
        std::vector<int> decrypted = doDecryption(digits);
        std::cout << "Encrypted number : ";
        printVector(digits);
        std::cout << "Decrypted number : ";
        printVector(decrypted);
    }else{
        std::cout << "ERROR! Enter a valid four-digit encrypted number." << std::endl;
        main(); // Recursive
    }

    return 0;
}

// Function implementation
bool checkNumberDigits(int number){
    bool isValidNumber = false;
    int digits = 1;

    while( number /= TEN ){
        digits++;
    }

    ( digits == FOUR ) ? isValidNumber = true : isValidNumber = false;

    return isValidNumber;
}

std::vector<int> getEveryDigit(int number){
    std::vector<int> digits;

    for(int i = 0; i < FOUR; i++){
        digits.push_back(number % TEN);
        number /= TEN;
    }

    // Reverse vector
    std::reverse(digits.begin(), digits.end());

    return digits;
}

std::vector<int> doDecryption(std::vector<int> digits){
    std::vector<int> decryptedNumber;
    int first, second, third, fourth;

    // Decryption formula
    first = ( digits[TWO] >= 0 && digits[TWO] <= 6 ) ? ( digits[TWO] + TEN ) - SEVEN : digits[TWO] - SEVEN;
    second = ( digits[THREE] >= 0 && digits[THREE] <= 6 ) ? ( digits[THREE] + TEN ) - SEVEN : digits[THREE] - SEVEN;
    third = ( digits[0] >= 0 && digits[0] <= 6 ) ? ( digits[0] + TEN ) - SEVEN : digits[0] - SEVEN;
    fourth = ( digits[1] >= 0 && digits[1] <= 6 ) ? ( digits[1] + TEN ) - SEVEN : digits[1] - SEVEN;

    decryptedNumber.push_back(first);
    decryptedNumber.push_back(second);
    decryptedNumber.push_back(third);
    decryptedNumber.push_back(fourth);

    return decryptedNumber;
}

void printVector(std::vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        std::cout << arr[i];
    }
    std::cout << std::endl;
}
