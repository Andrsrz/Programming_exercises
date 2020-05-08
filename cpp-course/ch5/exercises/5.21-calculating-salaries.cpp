/*
 * C++ How To Program - 5.21 : Calculating Salaries.
 * Description in txt file.
 */

#include <iostream>

// Avoid magic numbers
const int PAY_CODE_1 = 1;
const int PAY_CODE_2 = 2;
const int PAY_CODE_3 = 3;
const int PAY_CODE_4 = 4;
const int HOUR_RANGE = 40;
const int MANAGER = 500;
const int HOURLY_WORKER = 5;
const float HOURLY_WORKER_EXTRA = 1.5;
const int COMMISSION_WORKER = 250;
const float COMMISSION_WORKER_PERCENTAGE = 5.7;
const int PIECE_WORKER = 2;

int main(){
    bool turn0n = true;
    int option = 0;
    int hours = 0;
    int sales = 0;
    int items = 0;

    while(turn0n){
        std::cout << "\tWelcome!\nEnter your pay code(1-4), 0 to exit : ";
        std::cin >> option;
        switch (option) {
            case PAY_CODE_1:
                std::cout << "Your week salary is : $" << MANAGER << ".\n";
                break;
            case PAY_CODE_2:
                std::cout << "Enter how many hours you worked this week : ";
                std::cin >> hours;
                if(hours <= HOUR_RANGE){
                    std::cout << "Your week salary is : $" << HOURLY_WORKER * HOUR_RANGE << ".\n";
                }else{
                    std::cout << "Your week salary is : $"
                              << (HOURLY_WORKER * HOUR_RANGE) + ((hours - HOUR_RANGE) * (HOURLY_WORKER * HOURLY_WORKER_EXTRA))
                              << ".\n";
                }
                break;
            case PAY_CODE_3:
                std::cout << "Enter the total gross of your weekly sales : ";
                std::cin >> sales;
                std::cout << "Your week salary is : $"
                          << COMMISSION_WORKER + (sales * COMMISSION_WORKER_PERCENTAGE)
                          << ".\n";
                break;
            case PAY_CODE_4:
                std::cout << "Enter the total items you produced this week : ";
                std::cin >> items;
                std::cout << "Your week salary is : $"
                          << PIECE_WORKER * items
                          << ".\n";
                break;
            case 0:
                turn0n = false;
                break;
            default:
                std::cout << "Enter a valid option!\n";
                break;
        }

    }

    return 0;
}
