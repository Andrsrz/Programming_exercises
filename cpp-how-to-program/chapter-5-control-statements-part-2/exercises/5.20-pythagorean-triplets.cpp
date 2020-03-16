/*
 * C++ How To Program - 5.20 : Pythagorean Triples.
 * Description in txt file.
 */

#include <iostream>

// Avoid magic numbers
const int THREE = 3; // a
const int FOUR = 4; // b
const int FIVE = 5; // c
const int MAX_RANGE = 500;

int main(){
    // a^2 + b^2 = c^2
    for(int a = THREE; a <= MAX_RANGE; a++){
        for(int b = FOUR; b <= MAX_RANGE; b++){
            for(int c = FIVE; c <= MAX_RANGE; c++){
                if( (a*a + b*b) == c*c ){
                    std::cout << a << ", " << b << " and " << c << " is a pythagorean triple\n";
                }
            }
        }
    }
    
    return 0;
}
