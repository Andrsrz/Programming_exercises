/*
 * C++ How To Program - 6.20 : Multiples.
 * Description in txt file.
 */

#include <iostream>

//Function declaration
bool isMultiple(int, int);

int main(){
    std::cout << "3, 6 : " << isMultiple(3, 6) << "\n";
    std::cout << "3, 14 : " << isMultiple(3, 14) << "\n";
    std::cout << "5, 25 : " << isMultiple(5, 25) << "\n";
    std::cout << "5, 21 : " << isMultiple(5, 21) << "\n";
    return 0;
}

// Function implementation
bool isMultiple(int x, int y){
    return y % x == 0;
}
