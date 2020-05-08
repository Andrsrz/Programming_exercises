/*
 * Code Wars : 6kuy Kata - Take A Ten Minute Walk
 * Description in txt file.
*/

#include <iostream>
#include <vector>

// Avoid magic numbers
const int TEN = 10;
const char N = 'n', S = 's', E = 'e', W = 'w';
// Test
const std::vector<char> V1 {'n'};
const std::vector<char> V2 {'n','s','n','s','n','s','n','s','n','s'};
const std::vector<char> V3 {'n','s'};
const std::vector<char> V4 {'n','s','n','s','n','s','n','s','n','s','n','s'};
const std::vector<char> V5 {'e','w','e','w','n','s','n','s','e','w'};
const std::vector<char> V6 {'n','s','e','w','n','s','e','w','n','s','e','w','n','s','e','w'};
const std::vector<char> V7 {'n','s','e','w','n','s','e','w','n','s'};

// Function declaration
bool isValidWalk(std::vector<char>);

int main(){
	std::cout << isValidWalk(V1) << std::endl;
	std::cout << isValidWalk(V2) << std::endl;
	std::cout << isValidWalk(V3) << std::endl;
	std::cout << isValidWalk(V4) << std::endl;
	std::cout << isValidWalk(V5) << std::endl;
	std::cout << isValidWalk(V6) << std::endl;
	std::cout << isValidWalk(V7) << std::endl;

	return 0;
}

// Function implementation
bool isValidWalk(std::vector<char> walk) {
	int count = 0;
	bool isValid = false;

	/*
	 * The algorithm is pretty easy
	 * We know that in coordinates North and East are positive
	 * and South and West are negative. And we know that we need to stop at 0.
	 * So we just need to count our steps and if the final count is 0, then
	 * the vector is a valid walk!.
	*/

	if(walk.size() == TEN){
		for(int i = 0; i < walk.size(); i++){
			if(walk[i] == N){
				count++;
			}else if(walk[i] == S){
				count--;
			}else if(walk[i] == E){
				count++;
			}else if(walk[i] == W){
				count--;
			}
		}

		if(count == 0){
			isValid = true;
		}
	}

	return isValid;
}
