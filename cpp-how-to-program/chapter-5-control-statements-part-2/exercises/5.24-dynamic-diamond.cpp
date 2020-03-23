/*
 * C++ How To Program - 5.24 : Dynamic Diamond.
 * Description in txt file.
 */

#include <iostream>

const char ASTERISK = '*';
const char SPACE = ' ';
const char NEW_LINE = '\n';
// Avoid magic numbers
const int TWO = 2;

int main(){
    int input = 0;
    int half = 0;
    bool isOdd = true;

    while(isOdd){
        std::cout << "Enter an odd number (1-19) : ";
        std::cin >> input;

        // Validate number
        if(input % TWO == 0){
            isOdd = false;
        }else{
            if(input == 1){
                half = 0;
            }else{
                half = (input - 1) / TWO;
            }

            // First half
            int times = 1;
            for(int i = 0; i <= half; i++){
                for(int j = half; j > i; j--){
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
            for(int i = 1; i <= half; i++){
                times -= TWO;
                for(int j = 0; j < i; j++){
                    std::cout << SPACE;
                }
                for(int j2 = times; j2 > 0; j2--){
                    std::cout << ASTERISK;
                }
                std::cout << NEW_LINE;
            }
        }
    }

    return 0;
}
