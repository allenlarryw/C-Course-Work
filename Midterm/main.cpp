#include <iostream>
#include <iomanip>
#include <string>
#include "ComputerTech.h"
using namespace std;

int main() {

	string password;

	ComputerTech tech;

	cout << "The Hours are" << " " << tech.getHours() << endl << endl;
	cout << "The Salary is" << " " << tech.getSalary() << endl << endl;

	tech.fixComputer();
	cout << endl << endl;

	cout << "Enter your password to check: ";
	cin >> password;
	cout << endl;
	cout << "Can my Account get hacked?" << " " << password << endl << endl;
	tech.checkPassword(password);

	return 0;
}

