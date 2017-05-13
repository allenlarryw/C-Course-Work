#ifndef COMPUTERTECH_H
#define COMPUTERTECH_H
#include "Employee.h"   // Needed for the employee class
#include <string>
using namespace std;

class ComputerTech: public Employee

{
private:

public:

	ComputerTech() :
			Employee() {

	}

	void fixComputer();
	void checkPassword(string pass);

};

#endif
