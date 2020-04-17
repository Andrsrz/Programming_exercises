/*
 * C++ How To Program - 6.19 : Hypotenuse Calculations.
 * Description in txt file.
 */

#include <iostream>
#include <cmath>
// Avoid magic numbers
const int TWO = 2;

// Function declaration
double numberPower(double, double);
double calculateHypotenuse(double, double);

int main(){
    std::cout << "Triangle\tSide 1\tSide 2\tHypotenuse\n";
    std::cout << "1\t\t3.0\t4.0\t" << calculateHypotenuse(3.0, 4.0) << "\n";
    std::cout << "2\t\t5.0\t12.0\t" << calculateHypotenuse(5.0, 12.0) << "\n";
    std::cout << "3\t\t8.0\t15.0\t" << calculateHypotenuse(8.0, 15.0) << "\n";
   
    return 0;
}

// Function implementation
double numberPower(double base, double exponent){
    double power = 1;

    for(double i = 0; i < exponent; i++){
        power *= base;
    }

    return power;
}

double calculateHypotenuse(double a, double b){
    // Hypotenuse
    // Formula : c = square root of (a² + b²)
    return sqrt( numberPower(a, TWO) + numberPower(b, TWO) );
}
