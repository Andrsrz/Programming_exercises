/*
 * C++ How To Program -
 *
 * GradeBook.cpp - Implementations of the GradeBook member-function definitions.
 * The setCourseName function performs validation.
*/

#include <iostream>
#include "GradeBook.h" // Include definition of class GradeBook
using namespace std;

// Avoid magic numbers :
const int TWENTY_FIVE = 25;

// Constructor initializes courseName with string supplied as argument.
GradeBook::GradeBook(string name){
	setCourseName(name);
}

/* Functions that sets the course name.
	Ensures that the course name has at most 25 characters */
void GradeBook::setCourseName(string name){
	if( name.length() <= TWENTY_FIVE ){
		courseName = name;
	}

	if( name.length() > TWENTY_FIVE ){
		courseName = name.substr( 0, TWENTY_FIVE );
		cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
			<< "Limiting courseName to first 25 characters.\n" << endl;
	}
}

// Function to get the course name.
string GradeBook::getCourseName(){
	return courseName;
}

// Display a welcome message to the GradeBook user.
void GradeBook::displayMessage(){
	cout << "Welcome to the grade book for\n" << getCourseName()
		<< "!" << endl;
}
