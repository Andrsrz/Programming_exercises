/*
 * C++ How to Program - 4.35 Encrypter.
 * Description in txt file.
 */

#include <iostream>
#include <algorithm>
#include <vector>

// Avoid magic numbers
const int FOUR = 4;
const int SEVEN = 7;
const int TEN = 10;

// Function declaration
bool checkNumberDigits(int);
std::vector<int> getEveryDigit(int);
std::vector<int> doEncryption(std::vector<int>);
void printVector(std::vector<int>);

int main(){
    int number = 0;
    std::cout << "Enter a four digit number : ";
    std::cin >> number;

    if(checkNumberDigits(number)){
        std::vector<int> digits = getEveryDigit(number);
        printVector(digits);
    }else{
        std::cout << "ERROR! Enter a valid four digit number." << std::endl;
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

    ( digits == 4 ) ? isValidNumber = true : isValidNumber = false;

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

std::vector<int> doEncryption(std::vector<int> digits){
    std::vector<int> encryptedDigits;

    for(int i = 0; i < digits.size(); i++){
       
    }

    return encryptedDigits;
}

void printVector(std::vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        std::cout << arr[i];
    }
    std::cout << std::endl;
}
