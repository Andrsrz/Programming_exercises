/*
 * C++ How To Program - 6.27 : Find the Minimum.
 * Description in txt file.
 */

#include <iostream>

/* Function declaration */
double getSmallest(double x, double y, double z);

int main(){
	double a, b, c;
	std::cout << "Enter three double-precision floating-point numbers(Separate with enters): ";
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cout << "The smallest is: "<< getSmallest(a, b, c) << std::endl;
	return 0;
}

/* Function implementation */
double getSmallest(double x, double y, double z){
	if((x < y) && (x < z)){
		return x;
	}else if((y < x) && (y < z)){
		return y;
	}else if((z < x) && (z < y)){
		return z;
	}
}
