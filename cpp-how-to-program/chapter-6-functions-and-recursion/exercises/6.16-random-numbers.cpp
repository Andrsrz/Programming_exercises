/*
 * C++ How To Program - 6.16 : Random Numbers.
 * Description in txt file.
 */

#include <iostream>
#include <cstdlib> // rand, srand
#include <ctime> // time

int main(){
    int n = 0;
    std::srand(std::time(0)); // Generate different seed each time the program is executed.

    n = 1 + std::rand() % 2;
    std::cout << "A : " << n << "\n";
    n = 1 + std::rand() % 100;
    std::cout << "B : " << n << "\n";
    n = std::rand() % 10;
    std::cout << "C : " << n << "\n";
    n = 1000 + std::rand() % 112;
    std::cout << "D : " << n << "\n";
    n = -1 + std::rand() % 2;
    std::cout << "E : " << n << "\n";
    n = -3 + std::rand() % 14;
    std::cout << "F : " << n << "\n";

    return 0;
}
