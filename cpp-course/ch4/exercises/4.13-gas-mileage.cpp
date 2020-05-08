/*
 * C++ How To Program - 4.13 : Gas Mileage
*/

#include <iostream>

int main(){
	float total = 0, miles = 0, gallons = 0, milesPerGallon = 0;
	float totalMiles = 0, totalGallons = 0;

	while(miles != -1){
		std::cout << "Enter miles driven (-1 to quit) : ";
		std::cin >> miles;
		
		if(miles == -1){
			break;
		}

		std::cout << "Enter gallons used : ";
		std::cin >> gallons;
		milesPerGallon = ( miles / gallons );
		std::cout << "MPG this trip : " << milesPerGallon << std::endl;
		totalMiles += miles;
		totalGallons += gallons;
		total = ( totalMiles / totalGallons );
		std::cout << "Total MPG : " << total << std::endl;
	}

	return 0;
}
