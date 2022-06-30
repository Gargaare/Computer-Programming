// C++ program to demonstrate difference between continue and break
#include <iostream>
using namespace std;
main()
{
    int i;
    cout << "The loop with break produces output as: \n";
  
    for (i = 1; i <= 5; i++) 
	{   // Program comes out of loop when i becomes multiple of 3.
        if ((i % 3) == 0)
            break;
        else
            cout << i << " "; 
    }
    cout << "\nThe loop with continue produces output as: \n";
    
	for (i = 1; i <= 5; i++) 
	{   // The loop prints all values except those that are multiple of 3. 
        if ((i % 3) == 0)
            continue;
         cout << i << " "; 
    }
}
