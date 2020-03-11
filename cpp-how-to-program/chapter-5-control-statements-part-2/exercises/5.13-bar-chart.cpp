/*
 * C++ How To Program - 5.13 : Bar Chart.
 * Description in txt file.
*/

#include <iostream>
#include <vector>

const char ASTERISK = '*';
const char NEW_LINE = '\n';
// Avoid magic numbers
const int FIVE = 5;

int main(){
    int times = 1;
    int input = 0;
    std::vector<int> userInput;

    std::cout << "Enter five numbers between 1 and 30:" << NEW_LINE;
    while(times <= FIVE){
        std::cin >> input;
        userInput.push_back(input);
        times++;
    }

    for(int i = 0; i < FIVE; i++){
        for(int j = 0; j < userInput[i]; j++){
            std::cout << ASTERISK;
        }
        std::cout << NEW_LINE;
    }

    return 0;
}
