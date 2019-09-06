/*
 * Code Wars : Kata - Set Alarm
*/

#include <iostream>

// Function declaration
bool setAlarm(bool, bool);

int main(){
	std::cout << setAlarm(true, true);

	return 0;
}

// Function implementation
bool setAlarm(bool employed, bool vacation){
	if(employed && !vacation){
		return true;
	}else{
		return false;
	}

	return true or false;
}
