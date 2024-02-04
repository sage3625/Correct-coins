// Correct coins.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	
	// declare variables
		int change, half_dollars, quarters, dimes, nickels, pennies; 
		// Ensure the input is in cents to allow for the remainder
		cout << "Enter the amount of change in cents: ";
		// input the amount of change
		cin >> change; 
		// Evaluate the number of quarters needed
		quarters = change / 25; 
		// Designate the remainder to the variable change for further coin determination
		change = change % 25; 
		// Evaluate the number of dimes needed
		dimes = change / 10; 
		// Designate the remainder to the variable change for further coin determination
		change = change % 10; 
		// Evaluate the number of nickels needed
		nickels = change / 5; 
		// The rest of the remainder will be in pennies
		pennies = change % 5; // calculate pennies

		// Display number of each type of coin
		cout << "\nQuarters: " << quarters << endl; 
		cout << "Dimes: " << dimes << endl; 
		cout << "Nickels: " << nickels << endl; 
		cout << "Pennies: " << pennies << endl;
		// Show the total of change based on coins to verify the correct total
		cout << "The total change returned is: " << pennies + (nickels * 5) + (dimes * 10) + (quarters * 25) << endl;
		return (0);
	
}

