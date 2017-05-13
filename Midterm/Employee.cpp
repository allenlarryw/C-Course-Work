#include "Employee.h"   // Needed for the employee class
#include <iostream>      // Needed for cout
#include <cstdlib>       // Needed for the exit function
#include <string>
using namespace std;

Employee::Employee() { // Default Construcor

	hours = 40;
	salary = 40000;

}

void Employee::setHours(int setHours) { //set

	hours = setHours;

}

void Employee::setSalary(int setSalary) { //set

	salary = setSalary;
}

int Employee::getHours() { //get

	return hours;
}

int Employee::getSalary() { //get

	return salary;
}
