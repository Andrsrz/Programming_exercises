/* C++ How To Program - 6.32 : Quality Points for Numeric Grades
 * Description in txt file. */

#include <iostream>

int getQualityPoints(int average);

int main(){
	int studentAverage = 0;
	std::cout << "Enter student's average :";
	std::cin >> studentAverage;
	std::cout << "Student's quality points : " << getQualityPoints(studentAverage) << std::endl;
	return 0;
}

int getQualityPoints(int average){
	int qualityPoint = 0;
	if(average >= 90 && average <= 100){
		qualityPoint = 4;
	}else if(average >= 80 && average <= 89){
		qualityPoint = 3;
	}else if(average >= 70 && average <= 79){
		qualityPoint = 2;
	}else if(average >= 60 && average <= 69){
		qualityPoint = 1;
	}
	return qualityPoint;
}
