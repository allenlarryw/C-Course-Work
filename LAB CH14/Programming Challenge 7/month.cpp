#include "Month.h"   // Needed for the employee class
#include <iostream>      // Needed for cout
#include <cstdlib>       // Needed for the exit function
#include <string>
using namespace std;

//***********************************************
// 				Constructors
//***********************************************

Month::Month() {   // #1 default Constructor

	monthName = "Janurary";

	monthNumber = 1;

}

Month::Month(string name) { // #2  Constructor that accepts a string month

	monthName = name;

	for (int i = 0; i < 12; i++) {

		if (monthName == monthArray[i]) {

			monthNumber = monthNumberArray[i];

		} //end if

	} //end for

} //end linearSearch Function

Month::Month(int number) { // #3  Constructor that accepts a int month

	monthNumber = number;

	for (int i = 0; i < 12; i++) {

		if (monthNumber == monthNumberArray[i]) {

			monthName = monthArray[i];

		} //end if

	} //end for

} //end linearSearch Function

//**********************************************************************************

//****************************************************
//  Overloaded  << Operator
//****************************************************

ostream &operator <<(ostream &os, const Month &month1) {

	os << month1.monthName << " " << month1.monthNumber << endl << endl;

	return os;
}

//********************************************************

//***************************************
//				 Mutators
//***************************************

void Month::setMonthName(string name) {

	monthName = name;

}

void Month::setMonthNumber(int number) {

	monthNumber = number;

}
//***************************************

//***************************************
//				Accessors
//***************************************
string Month::getMonthName() {

	return monthName;

}
int Month::getMonthNumber() {

	return monthNumber;
}
//***************************************
