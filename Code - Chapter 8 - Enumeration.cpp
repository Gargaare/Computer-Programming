// C++ Enumerations -

#include <iostream>
using namespace std;

enum levels {freshman = 1, sophomore = 2, junior = 3, senior = 4};
//enum levels {freshman = 1, sophomore = 2, junior = 3, senior = 4} abdi;


int main() 
{

    levels abdi;

    abdi = junior;
    
    cout << "The University Level of Abdi is = " << abdi << endl;

    return 0;
}
