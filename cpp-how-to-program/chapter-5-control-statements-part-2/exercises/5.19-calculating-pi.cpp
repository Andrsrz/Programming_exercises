/*
 * C++ How To Program - 5.19 : Calculating Pi
 * Description in txt file
 */

#include <iostream>

// Avoid magic numbers
const int TWO = 2;
const int FOUR = 4;
const int MAX_RANGE = 1000;

int main(){
    double x = 1; // denominator
    double pi = 0;

    std::cout << "Calculating Pi : \n";
    for(int i = 1; i <= MAX_RANGE; i++){
        if(i % TWO == 0){
            pi += -(FOUR / x);
        }else{
            pi += (FOUR / x);
        }
        x+=TWO;
        std::cout << "Iteration : " << i << "\t\tPi : " << pi << "\n";
    }

    return 0;
}
