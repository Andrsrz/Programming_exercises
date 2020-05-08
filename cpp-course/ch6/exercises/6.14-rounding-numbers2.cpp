/*
 * C++ How To Program - 6.14 : Rounding Numbers 2.
 * Description in txt file.
 */

#include <iostream>
#include <cmath> // floor()
// Avoid magic numbers
const double ROUND = 0.5;
const double TEN = 10.0;
const double HUNDRED = 100.0;
const double THOUSAND = 1000.0;

// Function declaration
double roundToInteger(double);
double roundToTenths(double);
double roundToHundredths(double);
double roundToThousandths(double);
void printProcess(double);

int main(){
    double x = 5.6;
    double i = -1.5;
    double a = -3.5;
    double n = 1.3;

    std::cout << "floor() function returns the closest integer.\nNot greater than that number.\n";
    printProcess(x);
    printProcess(i);
    printProcess(a);
    printProcess(n);

    return 0;
}

// Function implementation
double roundToInteger(double number){
    return floor(number + ::ROUND);
}

double roundToTenths(double number){
    return floor(number * ::TEN + ::ROUND) / ::TEN;
}

double roundToHundredths(double number){
    return floor(number * ::HUNDRED + ::ROUND) / ::HUNDRED;
}

double roundToThousandths(double number){
    return floor(number * ::THOUSAND + ::ROUND) / ::THOUSAND;
}

void printProcess(double number){
    std::cout << "Origianl : " << number << "\n";
    std::cout << "floor(" << number << " + 0.5)\n";
    std::cout << "Rounded : " << roundToInteger(number) << "\n";
    std::cout << "floor(" << number << " * 10 + 0.5) / 10\n";
    std::cout << "Rounded : " << roundToTenths(number) << "\n";
    std::cout << "floor(" << number << " * 100 + 0.5) / 100\n";
    std::cout << "Rounded : " << roundToHundredths(number) << "\n";
    std::cout << "floor(" << number << " * 1000 + 0.5) / 1000\n";
    std::cout << "Rounded : " << roundToThousandths(number) << "\n";
}
