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
 * GradeBook.h - GradeBook class definition presents the public interface
 * of the class. Member-function definitions appear in GradeBook.cpp.
*/

#include <string>
using namespace std;

// GradeBook class definition
class GradeBook{
public:
	GradeBook(string, string); // Constructor that initialized a GradeBook object
	void setCourseName(string); // Function that sets the course name
	string getCourseName(); // Function that gets the course name
	void setCourseInstructor(string); // Function that sets the course instructor
	string getCourseInstructor(); // Function that gets the course instructor
	void displayMessage(); // Function that displays a welcome message
private:
	string courseName; // Course name for this GradeBook
	string courseInstructor; // Course instructor
};
