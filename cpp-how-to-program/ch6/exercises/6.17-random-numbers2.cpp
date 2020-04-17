/*
 * C++ How To Program - 6.17 : Random Numbers 2.
 * Description in txt file.
 */

#include <iostream>
#include <cstdlib> // rand, srand
#include <ctime> // time

int main(){
    int n = 0;
    std::srand(std::time(0));

    n = 2 * (1 + std::rand() % 5); // Only even numbers
    std::cout << "A (Even) : " << n << "\n";
    n = 2 * (1 + std::rand() % 5) + 1; // Only odd numbers
    std::cout << "B (Odd) : " << n << "\n";
    n = 2 * ( 2 * (1 + std::rand() % 5) + 1 ); // Only even numbers, series 4 to 4.
    std::cout << "C (Even) : " << n << "\n";

    return 0;
}
