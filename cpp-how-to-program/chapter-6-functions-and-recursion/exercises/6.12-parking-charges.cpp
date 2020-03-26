/*
 * C++ How To Program - 6.12 : Parkin Charges.
 * Description in txt file.
 */

#include <iostream>
// Avoid maigc numbers
const float MINIMUM_HOUR = 3.0;
const float MINIMUM_FEE = 2.00;
const float MAXIMUM_HOUR = 24.0;
const float MAXIMUM_FEE = 10.00;
const float EXTRA_HOUR_FEE = 0.50;

// Function declaration
float calculateCharges(float);

int main(){
    float car1 = 0.0, car2 = 0.0, car3 = 0.0;

    std::cout << "Hours parked : ";
    std::cin >> car1;
    std::cout << "Hours parked : ";
    std::cin >> car2;
    std::cout << "Hours parked : ";
    std::cin >> car3;

    std::cout << "Car\tHours\tCharge\n";
    std::cout << "1\t" << car1 << "\t "<< calculateCharges(car1) << "\n";
    std::cout << "2\t" << car2 << "\t "<< calculateCharges(car2) << "\n";
    std::cout << "3\t" << car3 << "\t "<< calculateCharges(car3) << "\n";
    std::cout << "TOTAL\t" << car1 + car2 + car3 << "\t"
              << calculateCharges(car1) + calculateCharges(car2) + calculateCharges(car3)
              << "\n";

    return 0;
}

// Function implementation
float calculateCharges(float hours){
    float charge = 0.0;
    int difference = 0;

    if(hours <= ::MINIMUM_HOUR){
        charge = ::MINIMUM_FEE;
    }else if((hours > ::MINIMUM_HOUR) && (hours < ::MAXIMUM_HOUR)){
        charge = ::MINIMUM_FEE;
        difference = hours - ::MINIMUM_HOUR;

        for(int i = 0; i < difference; i++){
            charge += ::EXTRA_HOUR_FEE;
        }
    }else if(hours == ::MAXIMUM_HOUR){
        charge = ::MAXIMUM_FEE;
    }

    return charge;
}
