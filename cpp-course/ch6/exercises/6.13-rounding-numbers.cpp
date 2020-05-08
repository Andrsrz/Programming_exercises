/*
 * C++ How To Program - 6.13 : Rounding Numbers.
 * Description in txt file.
 */

#include <iostream>
#include <cmath>
// Avoid magic numbers
const float ROUND = 0.5;

// Function declaration
float roundNumber(float);
void printProcess(float, float);

int main(){
    float x = 5.6;
    float i = -1.5;
    float a = -3.5;
    float n = 1.3;

    std::cout << "floor() function returns the closest integer.\nNot greater than that number.\n";
    printProcess(x, roundNumber(x));
    printProcess(i, roundNumber(i));
    printProcess(a, roundNumber(a));
    printProcess(n, roundNumber(n));
   
    return 0;
}

// Function implementation
float roundNumber(float number){
    return floor(number + ::ROUND);
}

void printProcess(float number, float rounded){
    std::cout << "Origianl : " << number << "\n";
    std::cout << "foor(" << number << " + 0.5)\n";
    std::cout << "Rounded: " << rounded << "\n";
}
