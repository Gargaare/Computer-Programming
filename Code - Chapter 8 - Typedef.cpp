// C++ typedef
#include <iostream>
using namespace std;
 
int main()
{
	
    typedef int tirooyin;
    
	// Now you can easily use integer to create variables of type int like this
    
	tirooyin num1, num2, sum;
    
    cout<<"Enter two number: ";
    cin>>num1>>num2;
    
    sum = num1 + num2;
    cout<<"Sum = "<<sum;
 
 return 0;
}
