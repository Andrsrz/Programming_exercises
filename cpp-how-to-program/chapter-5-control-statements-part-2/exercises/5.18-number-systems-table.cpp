/*
 * C++ How To Program - 5.18 : Number Systems Table
 * Description ins txt file.
 */

#include <iostream>
#include <sstream> // dec, oct, hex

// Avoid magic numbers
const int MAX_RANGE = 256;

int main(){
    std::cout << "Decimal.\tOctal.\tHexadecimal.\n";
    for(int i = 1; i <= MAX_RANGE; i++){
        std::cout << std::dec << i << "\t\t"
                  << std::oct << i << "\t"
                  << std::hex << i << "\n";
    }
    return 0;
}
