// A reference variable is a "reference" to an existing variable, 
// and it is created with the & operator:
#include <iostream>
using namespace std;

string food = "Pizza";  // food variable
string &meal = food;    // reference to food

int main ()
{
    // Now, we can use either the variable name (food) or the reference name (meal) 
	// to refer to the food variable:
	string food = "Pizza";
    string &meal = food;

    cout << food << "\n";
    cout << meal << "\n"; 
    
    return 0;
} 
