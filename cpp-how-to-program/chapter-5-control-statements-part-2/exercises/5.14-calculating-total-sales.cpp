/*
 * C++ How To Program - 5.14 : Calculating Total Sales
 * Description in txt file.
*/

#include <iostream>
#include <string>
#include <vector>

const char ZERO = '0';
// Avoid magic numbers
const float P1 = 2.98;
const float P2 = 4.50;
const float P3 = 9.98;
const float P4 = 4.49;
const float P5 = 6.87;

int main(int argc, char** argv){
    float total = 0.0;
    int product = 0;
    float quantity = 0.0;

    for(int i = 1; i < argc; i++){
        std::string str = argv[i];
        product = (int)str[0] - ZERO;
        quantity = (float)str[2] - ZERO;

        switch(product){
            case 1:
                std::cout << "Product 1° : " << P1 * quantity << std::endl;
                total += (P1 * quantity);
                break;
            case 2:
                std::cout << "Product 2° : " << P2 * quantity << std::endl;
                total += (P2 * quantity);
                break;
            case 3:
                std::cout << "Product 3° : " << P3 * quantity << std::endl;
                total += (P3 * quantity);
                break;
            case 4:
                std::cout << "Product 4° : " << P4 * quantity << std::endl;
                total += (P4 * quantity);
                break;
            case 5:
                std::cout << "Product 5° : " << P5 * quantity << std::endl;
                total += (P5 * quantity);
                break;
            default:
                std::cout << "Enter valid arguments!." << std::endl;
                break;
        }

    }

    std::cout << "Total retail value : " << total << std::endl;

    return 0;
}
