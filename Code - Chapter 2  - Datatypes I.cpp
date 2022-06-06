#include<iostream>
using namespace std;
int main()
{	
	int number;
	double decimal;
	char letter;
	bool abc;

    cout << "Enter an integer: ";
    cin >> number;
    
    cout << "Enter a floating number: ";
    cin >> decimal;
    
    cout << "Enter a Character: ";
    cin >> letter;
    
    cout << "Enter a Boolean value of true or false: ";
    cin >> abc;

    cout << " -------------------------- " <<endl;
    cout << "You Entered, Integer Number: " << number <<endl;
    cout << "You Entered, Floating Number: " << decimal <<endl;
    cout << "You Entered, Character: " << letter <<endl;
    cout << "You Entered, Boolean Value of : " << abc <<endl;
	
	return 0;
}
