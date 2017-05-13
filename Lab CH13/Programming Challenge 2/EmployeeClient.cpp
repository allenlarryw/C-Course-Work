// Chapter 13, Programming Challenge 2: Employee Class
#include <iostream>
#include <iomanip>
#include <string>

#include "Employee.h"
using namespace std;

// Function prototype
void displayEmployee(Employee);

// Driver program to demonstrate the class
int main() {
	// Create an Employee object to test constructor #1.
	Employee defaultConstrucor;

	// Create susan
	Employee susan;
	susan.setName("Susan Meyers");
	susan.setidNumber(47899);
	susan.setDepartment("Accounting");
	susan.setPosition("Vice President");

	// Create an Employee object to test constructor #2.
	Employee constructor2("Allen", 78232, "IT", "Programmer");

	// Create mark
	Employee mark;
	mark.setName("Mark Johns");
	mark.setidNumber(39119);
	mark.setDepartment("IT");
	mark.setPosition("Programmer");

	// Create an Employee object to test constructor #3.
	Employee constructor3("Jay2k", 45879);

	// Create joy
	Employee joy;
	joy.setName("Joy Rogers");
	joy.setidNumber(81774);
	joy.setDepartment("Manufacturing");
	joy.setPosition("Engineer");
	// Display each employee's data.
	cout << left << setw(20) << "Name" << setw(15) << "ID Number" << setw(15)
			<< "Department" << setw(15) << "Position";
	displayEmployee(susan);
	displayEmployee(mark);
	displayEmployee(joy);

	cout << endl << endl
			<< "_____________________________________________________";
	cout << endl << endl << "This is the list of the Constructors" << endl;
	cout << "_____________________________________________________";
	displayEmployee(defaultConstrucor);
	cout << " Constructor Number 1";
	displayEmployee(constructor2);
	cout << " Constructor Number 2";
	displayEmployee(constructor3);
	cout << " Construcor Number 3";
	return 0;
}

//**************************************************
// The displayEmployee function displays the data  *
// in the Employee object passed as an argument.   *
//**************************************************

void displayEmployee(Employee e) {
	cout << endl << endl;
	cout << e.getName();
	cout << " " << e.getidNumber();
	cout << " " << e.getDepartment();
	cout << " " << e.getPosition();

}
