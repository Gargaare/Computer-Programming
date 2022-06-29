//How to use predefined functions.
#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;
int main()
{
	int x;
	double u, v;
	cout << "Line 1: Uppercase a is " << static_cast<char>(toupper('a')) << endl; //Line 1
	
	u = 4.2; //Line 2
	v = 3.0; //Line 3
	cout << "Line 4: " << u << " to the power of " << v << " = " << pow(u, v) << endl; //Line 4
	
	cout << "Line 5: 5.0 to the power of 4 = " << pow(5.0, 4) << endl; //Line 5
	
	u = u + pow(3.0, 3); //Line 6
	cout << "Line 7: u = " << u << endl; //Line 7
	
	x = -15; //Line 8
	
	cout << "Line 9: Absolute value of " << x << " = " << abs(x) << endl; //Line 9
	
	return 0;
	
}
