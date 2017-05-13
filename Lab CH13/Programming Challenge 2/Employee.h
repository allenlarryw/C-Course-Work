// Employee Class Declaration
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
private:
	// Employee's name
	string name;
	// ID number
	int idNumber;
	// Department name
	string department;
	// Employee's position
	string position;

public:
	// 3 Constructors
	Employee(); //  Construcor 1
	Employee(string n, int id, string depart, string pos); //Constructor 2
	Employee(string n, int id);

	// 4 Mutators

	string getName();
	string getDepartment();
	string getPosition();
	int getidNumber();

	// 4 Accessors
	void setName(string n);
	void setidNumber(int id);
	void setDepartment(string depart);
	void setPosition(string pos);
};
#endif
