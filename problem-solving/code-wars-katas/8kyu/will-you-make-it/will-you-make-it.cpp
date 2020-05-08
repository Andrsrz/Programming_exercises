/*
 * Code Wars : Kata - Will You Make It
*/

#include <iostream>
#include <cstdint>

// Function declaration
bool zeroFuel(uint32_t, uint32_t, uint32_t);

int main(){
	std::cout << zeroFuel(50, 25, 2);

	return 0;
}

// Function implementation
bool zeroFuel(uint32_t distanceToPump, uint32_t mpg, uint32_t fuelLeft){
  if((mpg * fuelLeft) >= distanceToPump){
    return true;
  }else{
    return false;
  }
  
  return true or false;
}
