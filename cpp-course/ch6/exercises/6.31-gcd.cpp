/* C++ How To Program - 6.31 : Greatest Common Divisor.
 * Description in txt file. */

#include <iostream>
#include <vector>

/* Avoid magic numbers */
const int NUM1 = 6;
const int NUM2 = 18;

/* Function declaration */
std::vector<int> getFactors(int number);
std::vector<int> orderVector(std::vector<int> vect);
std::vector<int> getCommonFactors(std::vector<int> vect1, std::vector<int> vect2);
int getGreatestCommonFactor(std::vector<int> commonFactors);
int gcd(int number1, int number2);

int main(){
	std::cout << NUM1 << ", " << NUM2 << std::endl;
	std::cout << "Greatest Common Divisor is : ";
	std::cout << gcd(NUM1, NUM2) << std::endl;
	return 0;
}

/* Function implementation */
std::vector<int> getFactors(int number){
	std::vector<int> factors;

	for(int i = 1; i <= number; i++){
		for(int j = i; j <= number; j++){
			if((i * j) == number){
				factors.push_back(i);
				factors.push_back(j);
			}
		}
	}

	return factors;
}

std::vector<int> orderVector(std::vector<int> vect){
	for(int i = 1; i < static_cast<int>(vect.size()); i++){
		int j = i;
		while(j > 0 && (vect[j - 1] > vect[j])){
			int temp = vect[j];
			vect.at(j) = vect[j - 1];
			vect.at(j - 1) = temp;
			j--;
		}
	}

	return vect;
}

std::vector<int> getCommonFactors(std::vector<int> vect1, std::vector<int> vect2){
	std::vector<int> commonFactors;

	for(int i = 0; i < static_cast<int>(vect1.size()); i++){
		for(int j = i; j < static_cast<int>(vect2.size()); j++){
			if(vect1[i] == vect2[j]){
				commonFactors.push_back(vect1[i]);
			}
		}
	}

	return commonFactors;
}

int getGreatestCommonFactor(std::vector<int> commonFactors){
	/* We assume that the vector has been ordered before
	 * entering this phase. */
	return commonFactors[commonFactors.size() - 1];
}

int gcd(int number1, int number2){
	std::vector<int> number1Factors = getFactors(number1);
	std::vector<int> number2Factors = getFactors(number2);
	std::vector<int> commonFactors;

	number1Factors = orderVector(number1Factors);
	number2Factors = orderVector(number2Factors);

	commonFactors = getCommonFactors(number1Factors, number2Factors);

	return getGreatestCommonFactor(commonFactors);
}
