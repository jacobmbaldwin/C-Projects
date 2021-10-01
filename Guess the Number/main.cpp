#include <iostream>
#include <cstdlib>
#include <ctime>

/* 
	Author: Jacob Baldwin
	Date: Sep 10, 2020
	Project: Guess the Number
 */
 
using namespace std;
int main(int argc, char** argv) {
	
	//Random number generation
	srand(time(0));
	int num = rand() % 101; 
	
	//User Inputs Guesses
	int guess;
	cout << "Guess a magic number between 0 and 100\n";
//	cout << num << endl;
	
	while (guess != num)
	{
		cout << "Enter your guess: ";
		cin >> guess;
		if (guess > num)
			{
				cout << "Your guess is too high.\n";
			}else if (guess < num)
			{
				cout << "Your guess is too low.\n";
				}	
	}
	
	cout << "Yes, the number is " << num;
	
	return 0;
}
