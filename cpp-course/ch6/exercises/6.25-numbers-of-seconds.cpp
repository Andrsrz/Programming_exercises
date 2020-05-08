/*
 * C++ How To Program - 6.25 : Calculating Number of Seconds
 * Description in txt file.
 */

#include <iostream>

// Avoid magic number
const int H_MAX_RANGE = 12;
const int S_MAX_RANGE = 60;

/* Function declaration */
int convertMinutesToSeconds(int minutes);
int convertHoursToSeconds(int hours);
int getSeconds(int hours, int minutes, int seconds);
int getSeconds(int hour1, int minutes1, int seconds1,
			   int hour2, int minutes2, int seconds2);

int main(){
	int hours = 0, minutes = 0, seconds = 0;
	std::cout << "Enter hour: ";
	std::cin >> hours;
	std::cout << "Enter minutes: ";
	std::cin >> minutes;
	std::cout << "Enter seconds: ";
	std::cin >> seconds;

	std::cout << getSeconds(hours, minutes, seconds) << std::endl;

	int hours2 = 0, minutes2 = 0, seconds2 = 0;
	std::cout << "Enter hour: ";
	std::cin >> hours2;
	std::cout << "Enter minutes: ";
	std::cin >> minutes2;
	std::cout << "Enter seconds: ";
	std::cin >> seconds2;

	std::cout << getSeconds(hours, minutes, seconds,
							hours2, minutes2, seconds2) << std::endl;

	return 0;
}

/* Function implementation */
int convertMinutesToSeconds(int minutes){
	if(minutes > ::S_MAX_RANGE){
		return 0;
	}
	return minutes * ::S_MAX_RANGE;
}

int convertHoursToSeconds(int hours){
	if(hours > ::H_MAX_RANGE || hours < 0){
		return 0;
	}
	return hours * (::S_MAX_RANGE * ::S_MAX_RANGE);
}

/* Get Seconds from 12 to any hour. */
int getSeconds(int hours, int minutes, int seconds){
	if(hours == ::H_MAX_RANGE && (minutes > 0 || seconds > 0)){
		std::cout << "Enter time before 12 hours\n";
		return 0;
	}

	int twelve = convertHoursToSeconds(::H_MAX_RANGE);
	int actualTime = convertHoursToSeconds(hours) +
		convertMinutesToSeconds(minutes) +
		seconds;

	return twelve - actualTime;
}

/* Get Seconds between two hours */
int getSeconds(int hour1, int minutes1, int seconds1,
				int hour2, int minutes2, int seconds2){
	if(hour1 < hour2){
		std::cout << "The firts hour needs to be greater\n";
		return 0;
	}

	int time1 = convertHoursToSeconds(hour1) +
		convertMinutesToSeconds(minutes1) +
		seconds1;
	int time2 = convertHoursToSeconds(hour2) +
		convertMinutesToSeconds(minutes2) +
		seconds2;

	return time1 - time2;
}
