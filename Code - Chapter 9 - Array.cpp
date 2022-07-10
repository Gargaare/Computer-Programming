/* C++ Arrays
   Arrays are used to store multiple values in a single variable, 
   instead of declaring separate variables for each value.*/
#include<iostream>
using namespace std;
int main()
{
	string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
	int list[5] = {12, 15, 9, 20, 31};
	
	// Access the elements of an Array
	cout << cars[0]<<endl;
	cout << list[3]<<endl;
	
	// Change an Array Element
	cars[0] = "Toyota";
	cout <<"After changing, the value of index 0 is: "<<cars[0]<<endl;
	
	return 0;
}
