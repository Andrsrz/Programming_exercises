/*
 * C++ How To Program - 2.3 : Statements.
 *
 * Write a single C++ statement to accomplish each of the following
 * assume that using directives have not beed used.
 *
 * a) Declare the variable 'c', 'thisIsAVariable', 'q76354' and 'number' to be type 'int'.
 * b) Prompt the user to enter an integer. End your prompting message with a colon ':'
 *	followed by a space and leave the cursor positioned after the space.
 * c) Read an integer from the user at the keyboard and store it in integer varible 'age'.
 * d) If the variable 'number' is not equal to '7', print "The variable 'number' is not equal to '7'".
 * e) Print the message "This is a C++ program" on one line.
 * f) Print the message "This is a C++ program" on two lines. End the first line with 'C++'.
 * g) Print the message "This is a C++ program" with each word on a separate line.
 * h) Print the message "This is a C++ program". Separate each word from the next by a tab.
*/

#include <iostream>

int main(){
	int c, thisIsAVariable, q76354, number; // a)
	int age;
	
	std::cout << "Please enter a number : "; // b)
	std::cin >> age; // c)

	number = age;
	if(age != 7){
		std::cout << "The variable 'number' is not equal to 7.\n"; // d)
	}

	std::cout << "This is a C++ program\n"; // e)
	std::cout << "This is a C++\nprogram\n"; // f)
	std::cout << "This\nis\na\nC++\nprogram\n"; // g)
	std::cout << "This\tis\ta\tC++\tprogram\n"; // h)

	return 0;
}
