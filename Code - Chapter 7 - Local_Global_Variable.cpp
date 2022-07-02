// Scope Resolution Operator
#include <iostream>
using namespace std;

// Global variable declaration:
int g = 30;
int h = 40;

int main () 
{
   // Local variable declaration:
   int g = 10;
   int h = 20;

   cout << g;   // Local
   cout <<"\n";
   cout << h;
   cout <<"\n";
   cout << ::g; // Global
   cout <<"\n";
   cout << ::h;
   return 0;
}
