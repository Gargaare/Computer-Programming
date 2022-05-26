/*
 * C++ program that calculates the area and perimeter of a rectangle
 */
#include <iostream>
using namespace std;

    int main()
    {
    	int width, length; 
		int area, perimeter;
    	
		cout << "\n\n Find the Area and Perimeter of a Rectangle :\n";
		cout << "-------------------------------------------------\n";		
        cout<<" Input the length of the rectangle : ";
    	cin>>length;
    	
		cout<<" Input the width of the rectangle : ";
    	cin>>width;
    	
    	area = (length*width);
    	
		perimeter= 2*(length+width);
		
		cout << "-------------------------------------------------\n";
        
		cout<<" The area of the rectangle is : "<< area << endl;
        cout<<" The perimeter of the rectangle is : "<< perimeter << endl;		
    
        return 0;
    }

