/*
 * C++ program that calculates the average of student grade
 */
#include<iostream>
using namespace std;
 
int main()
{
    int sub1, sub2, sub3;
    float avg;
 
    cout << "Enter the first subject : ";
    cin >> sub1;
    cout << "Enter the second subject : ";
    cin >> sub2;
    cout << "Enter the third subject : ";
    cin >> sub3;
    
    avg = (sub1+sub2+sub3)/3;
    
    cout << "The average of the three subject is : " << avg << endl;

    return 0;
}

