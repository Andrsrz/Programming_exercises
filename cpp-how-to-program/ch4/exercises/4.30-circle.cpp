/*
  * C++ How to Program - 4.30 : Circle.
  * Description in txt file.
*/

#include <iostream>
#include <cmath>

// Avoid magic numbers
const int TWO = 2;
const double PI = 3.14159;

int main(){
	double radius = -1;
	double diameter = 0;
	double circumference = 0;
	double area = 0;
	
	while(radius < 0){
		std::cout << "Enter the circle's radius : ";
		std::cin >> radius;
	}
	
	diameter = TWO * radius;
	circumference = PI * diameter;
	area = PI * pow(radius, TWO);
	std::cout << "Diameter : " << diameter << "\n" << "Circumference : " << circumference << "\n" << "Area : " << area << "\n";
	
	return 0;
}