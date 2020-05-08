/*
 * C++ How To Program - 6.18 : Exponentiation
 * Description in txt file.
 */

#include <iostream>

// Function declaration
int integerPower(int, int);

int main(){

    std::cout << integerPower(3, 4) << std::endl;

    return 0;
}

// Function implementation
int integerPower(int base, int exponent){
    int power = 1;

    for(int i = 0; i < exponent; i++){
        power *= base;
    }

    return power;
}
