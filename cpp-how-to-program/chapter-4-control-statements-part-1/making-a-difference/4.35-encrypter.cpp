/*
 * C++ How to Program - 4.35 Encrypter.
 * Description in txt file.
 */

#include <iostream>
#include <vector>

// Avoid magic numbers
const int SEVEN = 7;
const int TEN = 10;

// Function declaration
bool checkNumberDigits(int);
std::vector<int> getEveryDigit(int);
std::vector<int> doEncryption(std::vector<int>);

int main(){
    int number = 0;
    std::cout << "Enter a four digit number : ";
    std::cin >> number;

    if(checkNumberDigits(number)){

    }else{
        std::cout << "ERROR! Enter a valid four digit number." << std::endl;
        main();
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
    return digits;
}

std::vector<int> doEncryption(std::vector<int> digits){
    std::vector<int> encryptedDigits;
    return encryptedDigits;
}
