/*
 * C++ How To Program - 3.11 Exercise :
 *
 * Include second string data member that represents the course instructor's name
 * Provide a set function to change the instructor's name and a get function
 * to retrieve it.
 * Modify the constructor to specify course name and instructor name parameters.
 * Modify function displayMessage to output the welcome message and course name,
 * then the string "This course is presented by : " followed by the instructor's name.
 *
 * GradeBook.cpp - Implementations of the GradeBook member-function definitions.
 * The setCourseName function performs validation.
*/

#include <iostream>
#include "GradeBook.h" // Include definition of class GradeBook
using namespace std;

// Avoid magic numbers :
const int TWENTY_FIVE = 25;

// Constructor initializes courseName with two string supplied as argument.
GradeBook::GradeBook(string name, string instructor){
	setCourseName(name);
	setCourseInstructor(instructor);
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

// Function to set course instructor.
void GradeBook::setCourseInstructor(string instructor){
	courseInstructor = instructor;
}

// Function to get course instructor.
string GradeBook::getCourseInstructor(){
	return courseInstructor;
}

// Display a welcome message to the GradeBook user.
void GradeBook::displayMessage(){
	cout << "Welcome to the grade book for\n" << getCourseName()
		<< "!" << endl;
	cout << "This course is presented by : " << getCourseInstructor()
		<< "." << endl;
}
