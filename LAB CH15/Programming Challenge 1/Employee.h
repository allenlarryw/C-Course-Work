// Specification file for the Employee class
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;

class Employee {
private:
	// Employee name
	string employeeName;
	// Employee number
	int employeeNumber;
	// Hire date
	string hireDate;
public:
	// Default constructor

	Employee();

	// Constructor

	Employee(string name, int number, string date);

	// 3 Mutators

	void setEmployeeName(string name);
	void setEmployeeNumber(int number);
	void setEmployeeHireDate(string date);
	// 3 Accessors
	string getName();
	int getNumber();
	string getHireDate();
};

#endif
