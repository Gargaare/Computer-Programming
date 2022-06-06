// Program that calculates the area and the perimeter of a rectangle
#include <iostream>
using namespace std;
int main() {
	
	int length, width;
	cout << " Enter the Length: " <<endl;
	cin >> length;
	
	cout << " Enter the Width: " <<endl;
	cin >> width;
	
	cout << " The area of the rectangle is = " << length * width <<endl;
	cout << " The perimeter of the Rectangle is = " << (length * 2) + (width * 2);
	return 0;
	
} 
