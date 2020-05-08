/*
 * Code Wars : Kata - Volume of a Cuboid
*/

#include <iostream>

// Function declaration
double getVolumeOfCuboid(double, double, double);

int main(){
	std::cout << getVolumeOfCuboid(5, 2, 1.4);
	return 0;
}

// Function implementation
double getVolumeOfCuboid(double length, double width, double height){
	double volume = 0;
	volume = length * width * height;
	return volume;
}
