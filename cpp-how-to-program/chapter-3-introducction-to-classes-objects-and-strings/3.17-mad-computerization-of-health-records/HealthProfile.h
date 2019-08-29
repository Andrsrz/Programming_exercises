/*
 * C++ How to Programm - 3.17 : Making a Difference Health Profile 
*/

class HealthProfile{
public:
	// Constructor
	HealthProfile(std::string, std::string, std::string, int, int, int, float, float);
	// Setters and getters
	void setFirstName(std::string);
	std::string getFirstName();
	void setLastName(std::string);
	std::string getLastName();
	void setGender(std::string);
	std::string getGender();
	void setBirthMonth(int);
	int getBirthMonth();
	void setBirthDay(int);
	int getBirthDay();
	void setBirthYear(int);
	int getBirthYear();
	void setHeight(float);
	float getHeight();
	void setWeight(float);
	float getWeight();
	// Methods
	int getAge();
	float getMaximumHeartRate(int);
	float getTargetHeartRate(float);
	float getBodyMassIndex();
private:
	// Attributes
	std::string firstName;
	std::string lastName;
	std::string gender;
	int birthMonth;
	int birthDay;
	int birthYear;
	float height;
	float weight;
};
