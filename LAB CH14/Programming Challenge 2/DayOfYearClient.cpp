// Chapter 14, Programming Challenge 2: Day of the Year

// Insert include statements

#include <iostream>
#include <iomanip>
#include <string>

#include "DayOfYear.h"
using namespace std;

int main() {

	int day;
	// Display the purpose of the program.
	cout << "This program converts a number \n"
			<< "into a string representing the \n" << "month and day.\n\n";

	// Get the day as input from the user.
	cout << "\nEnter a whole number between 1 and 365: ";
	cin >> day;

	// Create an instance of the DayOfYear class / Set the day.
	DayOfYear date(day);

	// Display the object.

	return 0;
}
