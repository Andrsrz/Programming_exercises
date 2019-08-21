/*
 * C++ How To Program - 3.15 : Exercise Date Class 
*/

#include <iostream>
#include <string>
#include "Date.h"

// Avoid magic numbers : 
const int MONTH_1 = 5;
const int DAY_1 = 18;
const int YEAR_1 = 1967;
const int MONTH_2 = 13;
const int DAY_2 = 21;
const int YEAR_2 = 1995;

int main(){
	// Create Date objects
	Date date1 = Date(MONTH_1, DAY_1, YEAR_1);
	Date date2 = Date(MONTH_2, DAY_2, YEAR_2);

	// Using date methods
	std::cout << date1.displayDate() << std::endl;
	std::cout << date2.displayDate() << std::endl;

	return 0;
}
