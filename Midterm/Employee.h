#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee

{
private:
	int hours;
	int salary;

public:
	Employee();
	void setHours(int setHours);
	void setSalary(int setSalary);

	int getHours();
	int getSalary();
};

#endif
