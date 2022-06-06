#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
	double u, v;
	string str;
	
	cout << "Line 1: 2 to the power of 6 = " << static_cast<int>(pow(2.0, 6.0)) << endl; //Line 1
	
	u = 12.5; //Line 2
	v = 3.0; //Line 3
	
	cout << "Line 4: " << u << " to the power of " << v << " = " << pow(u, v) << endl; //Line 4 
	cout << "Line 5: Square root of 24 = " << sqrt(24.0) << endl; //Line 5 
	
	u = pow(8.0, 2.5); //Line 6
	cout << "Line 7: u = " << u << endl; //Line 7
	
	str = "Programming with C++"; //Line 8
	cout << "Line 9: Length of str = " << str.length() << endl; //Line 9
	
	return 0;
	
}
