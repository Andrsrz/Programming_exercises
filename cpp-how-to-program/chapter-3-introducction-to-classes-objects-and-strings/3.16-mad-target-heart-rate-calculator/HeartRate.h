/*
 * C++ How To Program - 3.16 : Making a Difference Target Heart Rate Calculator
*/

class HeartRate{
public:
	HeartRate(std::string, std::string, int, int, int); // Constructor
	void setFirstName(std::string); // Setters and getters
	std::string getFirstName();
	void setLastName(std::string);
	std::string getLastName();
	void setBirthMonth(int);
	int getBirthMonth();
	void setBirthDay(int);
	int getBirthDay();
	void setBirthYear(int);
	int getBirthYear();
	int getAge(); // Calculate the age
	float getMaximumHeartRate(int); // Calculate maximum heart rate
	float getTargetHeartRate(float); // Calculate target heart rate
private:
	std::string firstName;
	std::string lastName;
	int birthMonth;
	int birthDay;
	int birthYear; // Attributes
};
