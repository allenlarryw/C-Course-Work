#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H
#include <string>
using namespace std;

class DayOfYear {
private:
	// day
	int day;
	// the acutal date
	string date;
	// static variables

public:
	// constructor
	DayOfYear(int dayNumber);

	// set (optional)
	void setDay(int dayNumber);
	void setDate();
	// print
	void printDate();
};
#endif
