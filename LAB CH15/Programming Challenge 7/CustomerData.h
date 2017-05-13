// CustomerData class
#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H
#include <string>
#include "PersonData.h"
using namespace std;

class CustomerData: public PersonData {
private:
	// Customer number
	int customerNumber;

	// Include in mailing list?
	bool mailingList;

public:

	//**********************************************
	// Default Constructor                         *
	//**********************************************

	CustomerData();

	//**********************************************
	// Constructor                                 *
	//**********************************************

	CustomerData(int, bool, string, string, string, string, string, string);

	//**********************************************
	// Mutator functions                           *
	//**********************************************

	void setCustomerNumber(int number);
	void setMailingList(bool list);

	//**********************************************
	// Accessor functions                          *
	//**********************************************
	int getCustomerNumber();
	bool getMailingList();

};

#endif
