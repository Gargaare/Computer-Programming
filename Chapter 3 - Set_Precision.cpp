// setprecision example

#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	// initialize a floating-point 
	
	float num = 2.71828;

    cout << "Original number is: " << num;

    cout << "\n";

    // print 3 significant figures

    cout << "The number with 3 significant figures is: ";

    cout << setprecision(3) <<num << endl;

    // print 3 decimal places

    cout << "The number with 3 decimal places is: ";

    cout << fixed << setprecision(3) << num;

    cout << "\n\n";

    return 0;
	
}

