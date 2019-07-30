/*
 * Code Wars - Kata : Can We Divide It?
 *
 * Your task is to create a function 'isDivideBy' or 'is_divide_by'
 * to check if an integer is divisible by each of two arguments.
*/

#include <iostream>
using namespace std;

// Function declaration
bool isDivideBy(int number, int a, int b);

int main(){
	int number, a, b;
	cout << "Please enter 'number' : ";
	cin >> number;
	cout << "Please enter 'a' : ";
	cin >> a;
	cout << "Please enter 'b' : ";
	cin >> b;
	cout << isDivideBy(number, a, b) << "\n";
	return 0;
}

bool isDivideBy(int number, int a, int b){
	/*
	 * We just need to check if 'number' divided by 'a' and 'b'
	 * left a remainder, if so then we return false, if not then
	 * we return true.
	*/
	if((number % a == 0) && (number % b == 0)){
		return true;
	}else{
		return false;
	}
}
