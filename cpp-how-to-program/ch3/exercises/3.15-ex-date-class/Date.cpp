/*
 * C++ How To Program - 3.15 : Exercise Date Class 
*/

#include <string>
#include "Date.h"

// Avoid magic numbers :
const int TWELVE = 12;

Date::Date(int dMonth, int dDay, int dYear){
	if( ( dMonth >= 1 ) && ( dMonth <= 12 ) ){
		setMonth(dMonth);
	}else{
		setMonth(1);
	}
	
	setDay(dDay);
	setYear(dYear);
}

void Date::setMonth(int dMonth){
	month = dMonth;
}

int Date::getMonth(){
	return month;
}

void Date::setDay(int dDay){
	day = dDay;
}

int Date::getDay(){
	return day;
}

void Date::setYear(int dYear){
	year = dYear;
}

int Date::getYear(){
	return year;
}

std::string Date::displayDate(){
	std::string date;
	date = std::to_string(getMonth()) + "/" + std::to_string(getDay()) + "/" + std::to_string(getYear());
	return date;
}
