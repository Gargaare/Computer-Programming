//Example: swap function
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1 = "Warm";
	string str2 = "Cold";
	
	cout<<"The original value of 'str1': "<<str1<<endl;
	cout<<"The original value of 'str2': "<<str2<<endl;
	
	cout<<"------------------------------------"<<endl;
	str1.swap(str2);
	
	cout<<"After swapped, the value of 'str1' is: "<<str1<<endl;
	cout<<"After swapped, the value of 'str2' is: "<<str2<<endl;
	
	return 0;
}



