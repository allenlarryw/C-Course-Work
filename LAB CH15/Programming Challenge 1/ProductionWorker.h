// Specification file for the ProductionWorker Class
#ifndef PRODUCTION_WORKER_H
#define PRODUCTION_WORKER_H
#include "Employee.h"
#include <string>

using namespace std;

class ProductionWorker: public Employee {
private:
	// The worker's shift
	int shift;
	// The worker's hourly pay rate
	double hourly;

	// shift type

	string shiftType;

public:
	// Default constructor
	ProductionWorker();
	// Constructorr
	ProductionWorker(int, double, string, int, string);
	// 2 Mutators
	void setShift(int shiftNumber);
	void setHourly(double pay);

	// 2 Accessors

	int getShiftNumber();
	double getPayRate();

	// optional getShiftName()

	string getShiftName();
};

#endif
