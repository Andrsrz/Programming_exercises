/*
 * C++ How To Program - 2.30 : Making a Difference Body Mass Index Calculator
 *
 * We introduced the body mass index (BMI) calculator in Exercise 1.9.
 * The formulas for calculating BMI are :
 * BMI = ( ( weightInPounds * 703 ) / ( heightInInches * heightInInches ) )
 * or
 * BMI = ( ( weightInKilograms ) / ( heightInMeters * heightInMeters ) )
 *
 * Create a BMI calculator application that reads the user's weight in pounds or kilograms and height in
 * inches or meters. Then calculates and displays the user's body mass index. Also, the application should
 * display the following information from the Department of Health and Human Service/National Institutes of
 * Health so the user can evaluate his/her BMI:
 *
 * BMI values:
 * Underweight : less than 18.5
 * Normal : between 18.5 and 24.9
 * Overweight : betweem 25 and 29.9
 * Obese : 30 or greater
 *
 * [Note: In this chapter, you learned to use the int type to represent whole numbers. The BMI calculations when 
 * done with int values will both produce whole-number results. In Chapter 4 you’ll learn to use the double
 * type to represent numbers with decimal points. When the BMI calculations are performed with double s, they’ll
 * both produce numbers with decimal points—these are called “floating-point” numbers.]
*/

#include <iostream>
using namespace std;

// Avoid magic numbers :
const double SEVEN_HUNDRED_AND_THREE = 703;
const double UNDERWEIGHT = 18.5;
const double NORMAL_MIN = 18.5;
const double NORMAL_MAX = 24.9;
const double OVERWEIGHT_MIN = 25;
const double OVERWEIGHT_MAX = 29.9;
const double OBESE = 30;

// Function declaration :
void welcomeUser();
double getBMI(double weight, double height);
void displayResult(double bmi);

int main(){
	double weight, height, bmi;
	welcomeUser();
	cin >> weight >> height;
	bmi = getBMI(weight, height);
	displayResult(bmi);
	return 0;
}

void welcomeUser(){
	cout << "Welcome to the Body Mass Index Calculator!\n";
	cout << "Enter your weight (kilograms) and height (meters) : ";
}

double getBMI(double weight, double height){
	double bmi;
	bmi = ( weight / ( height * height ) );
	return bmi;
}

void displayResult(double bmi){
	if( bmi < UNDERWEIGHT ){
		cout << "BMI : " << bmi << ". You are underweight.\n";
	}else if( ( bmi >= NORMAL_MIN ) || ( bmi <= NORMAL_MAX ) ){
		cout << "BMI : " << bmi << ". You are normal.\n";
	}else if( ( bmi >= OVERWEIGHT_MIN ) || ( bmi <= OVERWEIGHT_MAX ) ){
		cout << "BMI : " << bmi << ". You are overweight.\n";
	}else if( bmi >= OBESE ){
		cout << "BMI : " << bmi << ". You are obese.\n";
	}
}
