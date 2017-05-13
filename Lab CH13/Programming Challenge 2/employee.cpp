#include "Employee.h"   // Needed for the employee class
#include <iostream>      // Needed for cout
#include <cstdlib>       // Needed for the exit function
using namespace std;

//***********************************************************
// Default Construcor 1
//***********************************************************

Employee::Employee() {

	name = "";
	idNumber = 0;
	department = "";
	position = "";

}

//***********************************************************
// Construcor 2
//***********************************************************
Employee::Employee(string n, int id, string depart, string pos) {

	name = n;
	idNumber = id;
	department = depart;
	position = pos;

}

//***********************************************************
// Construcor 3
//***********************************************************

Employee::Employee(string n, int id) {
	// intializing class variables
	name = n;
	idNumber = id;
	department = "";
	position = "";

}

//***********************************************************
// Returns  Employee name 
//***********************************************************

string Employee::getName() {

	return name;

}

//***********************************************************
//  Returns idNumber
//*********************************************************** 

int Employee::getidNumber() {

	return idNumber;

}

//***********************************************************
// Returns Department value
//***********************************************************

string Employee::getDepartment() {

	return department;

}

//***********************************************************
// Returns Position value
//***********************************************************

string Employee::getPosition() {

	return position;

}

//***********************************************************
//  Sets employee Name
//*********************************************************** 
void Employee::setName(string n) {

	name = n;

}

//***********************************************************
//  Sets employee id
//*********************************************************** 
void Employee::setidNumber(int id) {

	idNumber = id;

}

//***********************************************************
//  Sets employee Department
//*********************************************************** 

void Employee::setDepartment(string depart) {

	department = depart;
}

//***********************************************************
//  Sets employee Position
//*********************************************************** 

void Employee::setPosition(string pos) {

	position = pos;

}
