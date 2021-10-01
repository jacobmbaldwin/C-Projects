#include <iostream>

/*
	Author: Jacob Baldwin
	Date: Sep 10, 2020
	Project: 99 Bottles
*/
using namespace std;
int main(int argc, char** argv) {
	//Introduction
	string beverage;
	cout << "Welcome to 99 Bottles.\n";
	cout << "What beverage should we use?";
	cin >> beverage;
	
	int bottles = 99; string phrase;
	

	
	while (bottles > 0)
	{
			if (bottles >= 2)
	{
		phrase = " bottles of ";
	} else if (bottles = 1)
	{
		phrase = " bottle of ";
	}
		cout << bottles << phrase << beverage << " on the wall.\n";
		cout << bottles << phrase << beverage << ".\n";
		cout << "Take one down and pass it around." << endl;
		bottles--;
		cout << bottles << phrase << beverage << " on the wall.\n";
	}
	cout << "Zero bottles of " << beverage << " on the wall. Time to go to the store and get more " << beverage << ".\n";
	
	return 0;
}
