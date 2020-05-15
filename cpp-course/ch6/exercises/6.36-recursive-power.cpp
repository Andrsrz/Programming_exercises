/* C++ How To Program - 6.36 : Recursive Power
 * Description in txt file. */

#include <iostream>

int powerRecursive(int base, int exponent);

int main(){
	std::cout << powerRecursive(5, 2);
	return 0;
}

int powerRecursive(int base, int exponent){
	if(exponent != 1){
		return base * powerRecursive(base, exponent - 1);
	}
	return base;
}
