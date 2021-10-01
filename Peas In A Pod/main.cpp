#include iostream>

/* 
	Author: Jacob Baldwin
	Date: August 26, 2020
	
 */
 using namespace std;

int main( ) 
{
	int height,  width,  totalLength;
	cout << "Hello\n";
	cout << "Press return after entering a number .\n";
	cout << "Enter the width of your area: \n";
	cin >> width;
	cout << "Enter the height of your area:\n";
	cin >> height;
	totalLength = width * height;
	cout << "If your width is ";
	cout << width ;
	cout << "\n";
	cout << "and your height is ";
	cout << height;
	cout << ", then\n";
	cout << "you need ";
	cout << totalLength;
	cout << " ft of fence. \n";
	cout << "Good-bye\n";
		
	return 0;
}
