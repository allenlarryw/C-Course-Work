#include "DayOfyear.h"   // Needed for the employee class
#include <iostream>      // Needed for cout
#include <cstdlib>       // Needed for the exit function
#include <string>
#include <sstream>
using namespace std;

DayOfYear::DayOfYear(int dayNumber) {

	setDay(dayNumber); // sets the number of days the enterted

	setDate(); // sets the acutal date the the number repersents

	printDate();  // prints out the actual date the number repersented

}

void DayOfYear::setDay(int dayNumber) {

	day = dayNumber;

}

void DayOfYear::setDate() {

	int daysForMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string month[12] = { "Januray", "Feburary", "March", "April", "May", "June",
			"July", "August", "September", "Ocotober", "November", "December" };

	for (int d = 0; d < 12; d++) {
		if (day > daysForMonth[d]) {
			day -= daysForMonth[d];

		} else {

			stringstream ss;
			ss << month[d] << " " << day;

			date = ss.str();

			break;
		}
	}

}

void DayOfYear::printDate() {

	cout << date;

}

