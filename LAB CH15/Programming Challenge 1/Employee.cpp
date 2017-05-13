#include "Employee.h"  
#include <iostream>      
#include <string>
#include <cstdlib>  
using namespace std;

//************************************************************
// 						Constructors
//************************************************************
Employee::Employee() {

	employeeName = "Constuctor";
	employeeNumber = 0;
	hireDate = "Constructor";

}

Employee::Employee(string name, int number, string date) {

	employeeName = name;
	employeeNumber = number;
	hireDate = date;

}
//************************************************************

//************************************************************
//							Mutators
//************************************************************

void Employee::setEmployeeName(string name) {

	employeeName = name;
}

void Employee::setEmployeeNumber(int number) {

	employeeNumber = number;
}

void Employee::setEmployeeHireDate(string date) {

	hireDate = date;
}
//************************************************************

//************************************************************
//						Accessors
//************************************************************

string Employee::getName() {

	return employeeName;
}

int Employee::getNumber() {

	return employeeNumber;
}

string Employee::getHireDate() {

	return hireDate;
}
//************************************************************
