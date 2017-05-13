// Specification file for the Month class
#ifndef MONTH_H
#define MONTH_H
#include <iostream>
#include <string>  // For string library functions

using namespace std;

// Constant for the number of months (optional)

class Month;
// Forward declaration.

// Overloaded operators (<<, >>)

ostream &operator <<(ostream &, const Month &);

class Month {
private:
	// To hold the name of the month
	string monthName;

	// To hold the number of the month
	int monthNumber;

	// Array To hold all the month names (optional)
	const string monthArray[12] = { "Januray", "February", "March", "April",
			"May", "June", "July", "August", "September", "October", "November",
			"December" };
	const int monthNumberArray[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
public:
	// Default constructor
	Month();

	// Overloaded string constructor
	Month(string name);

	// Overloaded numeric constructor
	Month(int number);

	// Mutators
	void setMonthName(string name);
	void setMonthNumber(int number);

	// Accessors

	string getMonthName();
	int getMonthNumber();

	// Overloaded operators
	friend ostream &operator <<(ostream &, const Month &);
};

#endif 
