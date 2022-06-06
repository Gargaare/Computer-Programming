#include <iostream>	//Header file
using namespace std;

const double CENTIMETERS_PER_INCH = 2.54;	//Named constants
const int INCHES_PER_FOOT = 12;			//Named constants


int main ()
{
	int feet, inches;
	int totalInches;
	double centimeter;
	cout << "Enter two integers, one for feet and one for inches: "; 
	cin >> feet >> inches;
	cout << endl;
	cout << "The numbers you entered are " << feet << " for feet and " << inches << " for inches. " << endl; 
	totalInches = INCHES_PER_FOOT * feet + inches;
	cout << "The total number of inches = " << totalInches << endl;
	centimeter = CENTIMETERS_PER_INCH * totalInches;
	cout << "The number of centimeters = " << centimeter << endl;
	return 0;
}

