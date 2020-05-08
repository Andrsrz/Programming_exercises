/*
 * Project Euler - Problem 5 : Smallest multiple
 *
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>
using namespace std;

// Avoid magic numbers :
const int TWO = 2;
const int THREE = 3;
const int FOUR = 4;
const int FIVE = 5;
const int SIX = 6;
const int SEVEN = 7;
const int EIGHT = 8;
const int NINE = 9;
const int TEN = 10;
const int ELEVEN = 11;
const int TWELVE = 12;
const int THIRTEEN = 13;
const int FOURTEEN = 14;
const int FIVETEEN = 15;
const int SIXTEEN = 16;
const int SEVENTEEN = 17;
const int EIGHTEEN = 18;
const int NINETEEN = 19;
const int TWENTY = 20;
const int BILLION = 1000000000;

int main(){
	for( int i = 1; i <= BILLION; i++ ){
		if( ( ( i % 1 ) == 0 ) &&
			( ( i % TWO ) == 0 ) &&
			( ( i % THREE ) == 0 ) &&
			( ( i % FOUR ) == 0 ) &&
			( ( i % FIVE ) == 0 ) &&
			( ( i % SIX ) == 0 ) &&
			( ( i % SEVEN ) == 0 ) &&
			( ( i % EIGHT ) == 0 ) &&
			( ( i % NINE ) == 0 ) &&
			( ( i % TEN ) == 0 ) &&
			( ( i % ELEVEN ) == 0 ) &&
			( ( i % TWELVE ) == 0 ) &&
			( ( i % THIRTEEN ) == 0 ) &&
			( ( i % FOURTEEN ) == 0 ) &&
			( ( i % FIVETEEN ) == 0 ) &&
			( ( i % SIXTEEN ) == 0 ) &&
			( ( i % SEVENTEEN ) == 0 ) &&
			( ( i % EIGHTEEN ) == 0 ) &&
			( ( i % NINETEEN ) == 0 ) &&
			( ( i % TWENTY ) == 0 )){
			cout << i << endl;
			break;
		}
	}

	return 0;
}
