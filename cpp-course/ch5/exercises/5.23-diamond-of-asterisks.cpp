/*
 * C++ How To Program - 5.23 : Diamond of Asterisks.
 * Description in txt file.
 */

#include <iostream>

const char ASTERISK = '*';
const char SPACE = ' ';
const char NEW_LINE = '\n';
// Avoid magic numbers
const int HALF = 4;
const int TWO = 2;

int main(){
    // First half
    int times = 1;
    for(int i = 0; i <= HALF; i++){
        for(int j = HALF; j > i; j--){
            std::cout << SPACE;
        }
        for(int j2 = 0; j2 < times; j2++){
            std::cout << ASTERISK;
        }
        std::cout << NEW_LINE;
        times += TWO;
    }

    // Second half
    times -= TWO;
    for(int i = 1; i <= HALF; i++){
        times -= TWO;
        for(int j = 0; j < i; j++){
            std::cout << SPACE;
        }
        for(int j2 = times; j2 > 0; j2--){
            std::cout << ASTERISK;
        }
        std::cout << NEW_LINE;
    }

    return 0;
}
