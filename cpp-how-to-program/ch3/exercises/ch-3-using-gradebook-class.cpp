/*
 * C++ How To Program - Create and Manipulate GradeBook Object.
*/

#include <iostream>
#include "GradeBook.h"
using namespace std;

int main(){
	// Creating GradeBook objects
	GradeBook gradeBook1("CS101 Introduction to Programming in C++");
	GradeBook gradeBook2("CS102 C++ Data Structures");

	// Using GradeBook object's methods
	cout << "gradeBook1's initial course name is : " << gradeBook1.getCourseName()
		<< "gradeBook2's initial course name is : " << gradeBook2.getCourseName()
		<< endl;

	gradeBook1.setCourseName("CS101 C++ Programming");

	cout << "gradeBook1's course name is : " << gradeBook1.getCourseName()
		<< "gradeBook2's course name is : " << gradeBook2.getCourseName()
		<< endl;

	return 0;
}
