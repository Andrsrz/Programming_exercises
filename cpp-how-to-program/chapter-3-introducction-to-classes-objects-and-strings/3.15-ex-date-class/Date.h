/*
 * C++ How To Program - 3.15 : Exercise Date Class 
*/

class Date{
public:
	Date(int, int, int); // Constructor
	void setMonth(int);
	int getMonth();
	void setDay(int);
	int getDay();
	void setYear(int);
	int getYear(); // Setters and getters
	std::string displayDate(); // Function to display date
private:
	int month;
	int day;
	int year;
};
