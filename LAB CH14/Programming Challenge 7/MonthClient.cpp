// Chapter 14, Programming Challenge 7: Month Class
#include <iostream>
#include "Month.h"

using namespace std;

int main() {



	// Create a Month object

	// 1. Use the default constructor
	Month month1;

	cout << "1. Default constructor:" << endl;
	cout << month1;

	// 2. Use the constructor that accepts a string month
	Month month2("February"); //  Construcor 2 accepts a string  then sets the monthNumber  to the correct value

	cout << "2. String constructor:" << endl;
	cout << month2.getMonthName() << " ";
	cout << month2.getMonthNumber() << endl << endl;

	// Use string set functions
	//month2.setMonthName("December"); // setting month Name with the setMonthName Function/Method

	//cout << "2. String  (set):" << endl;
	//cout << month2.getMonthName() << endl;
	//cout << month2.getMonthNumber() <<endl<<endl<<endl<<endl<<endl<<endl;

	// 3. Use the constructor that accepts a numeric month
	Month month3(3); //  Construcor 3 accepts a int  then sets the monthName  to the correct value

	cout << "3. Numeric constructor:" << endl;
	cout << month3.getMonthName() << " ";
	cout << month3.getMonthNumber() << endl << endl;

	// Use numeric set functions
	//month3.setMonthNumber(12);       // setting month Number with the setMonthNumber Function/Method

	//cout << "3. Numeric  (set):" << endl;

	//cout << month3.getMonthName() << endl;
	//cout << month3.getMonthNumber() << endl << endl;

	return 0;
}
