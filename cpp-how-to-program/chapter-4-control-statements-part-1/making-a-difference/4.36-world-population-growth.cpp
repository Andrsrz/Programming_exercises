/*
 * C++ How To Program - 4.36 World Population Growth.
 * Description in txt file.
 */

#include <iostream>

// Avoid magic numbers
double CURRENT_POPULATION = 7616000000;
float GROWTH_PER_YEAR = 1.1;
int YEARS = 75;
int TWO = 2;

// Function declaration
double calculatePopulation(double, float);
void printTable(int, double, float);

int main(){
    printTable(YEARS, CURRENT_POPULATION, GROWTH_PER_YEAR);
    return 0;
}

// Function implementation
double calculatePopulation(double currentPopulation, float growthPercentage){
    return (currentPopulation * growthPercentage);
}

void printTable(int years, double population, float growthPercentage){
    std::cout << "Year.\tAnticipated Population.\tIncrease.\n";
    for(int i = 1; i <= years; i++){
        double nextPopulation = calculatePopulation(population, growthPercentage);
        std::cout << i << ".\t" << nextPopulation << ".\t\t" << (nextPopulation - population) << ".\t\n";
        population = nextPopulation;
    }
}
