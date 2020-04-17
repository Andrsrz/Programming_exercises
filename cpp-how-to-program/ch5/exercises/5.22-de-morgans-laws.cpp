/*
 * C++ How To Program - 5.22 : De Morgan's Laws.
 * Description in txt file.
 */

#include <iostream>

// Avoid magic numbers
const int FOUR = 4;
const int FIVE = 5;
const int SIX = 6;
const int SEVEN = 7;
const int EIGHT = 8;

int main(){
    int a = 0, b = 0, i = 0, g = 0, j = 0, x = 0, y = 0;

    if( (!( x < FIVE ) && !( y >= SEVEN )) == !(( x < FIVE ) || ( y >= SEVEN )) ){
        std::cout << "Expressions 'A' are equal.\n";
    }else{
        std::cout << "Expressions 'A' are not equal.\n";
    }

    if( (!( a == b ) || !( g != FIVE )) == !(( a == b ) && ( g != FIVE )) ){
        std::cout << "Expressions 'B' are equal.\n";
    }else{
        std::cout << "Expressions 'B' are not equal.\n";
    }

    if( !(( x <= EIGHT ) && ( y > FOUR )) == (!( x <= EIGHT ) || !( y > FOUR )) ){
        std::cout << "Expressions 'C' are equal.\n";
    }else{
        std::cout << "Expressions 'C' are not equal.\n";
    }

    if( !(( i > FOUR ) || ( j <= SIX )) == (!( i > FOUR ) && !( j <= SIX )) ){
        std::cout << "Expressions 'D' are equal.\n";
    }else{
        std::cout << "Expressions 'D' are not equal.\n";
    }

    return 0;
}
