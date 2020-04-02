/*
 * C++ How To Program - 6.21 : Even.
 * Description in txt file.
 */

#include <iostream>
// Avoid magic numbers
const int TWO = 2;

// Function declaration
bool isEven(int);

int main(){
    std::cout << "1 : " << isEven(1) << "\n";
    std::cout << "1 : " << isEven(1) << "\n";
    std::cout << "2 : " << isEven(2) << "\n";
    std::cout << "3 : " << isEven(3) << "\n";
    std::cout << "5 : " << isEven(5) << "\n";
    std::cout << "8 : " << isEven(8) << "\n";
    std::cout << "13 : " << isEven(13) << "\n";
    return 0;
}

// Function implementation
bool isEven(int x){
    return (x % TWO) == 0 ? true : false;
}
