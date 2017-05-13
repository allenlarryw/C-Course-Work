#include "ProductionWorker.h"  
#include <iostream>      
#include <string>
#include <cstdlib>  
using namespace std;

//************************************************************
// 						Constructors
//************************************************************

ProductionWorker::ProductionWorker() :
		Employee() {

	shift = 0;
	hourly = 0;
}

ProductionWorker::ProductionWorker(int shiftNumber, double pay, string name,
		int number, string date) :
		Employee(name, number, date) {

	shift = shiftNumber;

	hourly = pay;

}
//************************************************************

//************************************************************
//							Mutators
//************************************************************

void ProductionWorker::setShift(int shiftNumber) {

	shift = shiftNumber;
}

void ProductionWorker::setHourly(double pay) {

	hourly = pay;
}
//************************************************************

//************************************************************
//						Accessors
//************************************************************

int ProductionWorker::getShiftNumber() {

	return shift;
}

double ProductionWorker::getPayRate() {

	return hourly;
}

string ProductionWorker::getShiftName() {

	if (shift > 0) {

		if (shift == 1) {
			shiftType = "Day Shift";
		} else {
			shiftType = "Night Shift";
		}

	} else {

		shiftType = "Not a valid shift";
	}

	return shiftType;
}

//************************************************************

