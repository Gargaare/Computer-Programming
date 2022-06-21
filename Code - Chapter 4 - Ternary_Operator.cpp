#include <iostream>
#include <string>
using namespace std;

int main() 
{
  int number = -4;
  string result;

  // Using ternary operator
  result = (number > 0) ? "Positive Number!" : "Negative Number!";

  cout << result << endl;

  return 0;
}
