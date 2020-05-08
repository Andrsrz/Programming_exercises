/* C++ How To Program - 6.33 : Coin Tossing.
 * Description in txt file. */

#include <iostream>

int flip();

int main(){
	int heads = 0, tails = 0;

	for(int i = 0; i < 100; i++){
		if(flip()){
			heads++;
		}else{
			tails++;
		}
	}

	std::cout << "Heads : " << heads << std::endl;
	std::cout << "Tails : " << tails << std::endl;

	return 0;
}

int flip(){
	return rand() % 2;
}
