// Chapter 15, Programming Challenge 1: Employee and ProductionWorker classes
#include <iostream>
#include <iomanip>
#include "ProductionWorker.h" 

using namespace std;

// Function prototype
void displayInfo(ProductionWorker);

int main() {
	// Create ProductionWorker object using default constructor
	ProductionWorker defaultConstructor;
	// Call displayInfo to print ProductionWorker's contents
	displayInfo(defaultConstructor);

	cout << endl << endl;

	// Create ProductionWorker object by passing all the employee's data as arguments to the constructor
	ProductionWorker argument(1, 7.25, "Allen", 13, "3/23/1992");
	// Call displayInfo to print ProductionWorker's contents
	displayInfo(argument);

	return 0;
}

//******************************************************
// The displayInfo function displays a production      *
// worker's employment information.                    *
//******************************************************
void displayInfo(ProductionWorker e) {
	cout << setprecision(2) << fixed << showpoint;
	cout << "Name: " << e.getName() << endl;
	cout << "Employee number: " << e.getNumber() << endl;
	cout << "Hire date: " << e.getHireDate() << endl;
	//cout << "Shift: " 
	//	 << e.getShiftName() << endl; // optional
	cout << "Shift number: " << e.getShiftNumber() << endl;
	cout << "Pay rate: " << e.getPayRate() << endl;
	cout << "Shift Type: " << e.getShiftName() << endl;
}
