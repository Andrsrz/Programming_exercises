/*
 * C++ How To Program -
 *
 * GradeBook.h - GradeBook class definition presents the public interface
 * of the class. Member-function definitions appear in GradeBook.cpp.
*/

#include <string>
using namespace std;

// GradeBook class definition
class GradeBook{
	public:
		GradeBook( string ); // Constructor that initialized a GradeBook object
		void setCourseName( string ); // Function that sets the course name
		string getCourseName(); // Function that gets the course name
		void displayMessage(); // Function that displays a welcome message
	private:
		string courseName; // Course name for this GradeBook
};
