#include "ComputerTech.h"   // Needed for the employee class
#include <iostream>      // Needed for cout
#include <cstdlib>       // Needed for the exit function
#include <string>
using namespace std;

void ComputerTech::fixComputer() {

	cout << "Is it plugged in?";
}

void ComputerTech::checkPassword(string pass) {

	string password = pass;

	int passwordSize = password.length();

	if (passwordSize >= 7) {

		cout << "False";
	} else {

		cout << "True";
	}
}

