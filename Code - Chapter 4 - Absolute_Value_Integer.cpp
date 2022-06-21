#include <iostream>
using namespace std;
int main()
{
	int number, temp;
	
    cout << "Line 1: Enter an integer: "; //Line 1
    cin >> number; //Line 2
    cout << endl; //Line 3
    temp = number; //Line 4
    if (number < 0) //Line 5
    number = -number; //Line 6
    cout << "Line 7: The absolute value of "
    << temp << " is " << number << endl; //Line 7
    
    return 0;
}
