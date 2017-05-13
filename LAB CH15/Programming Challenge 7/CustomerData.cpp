#include <iostream> 
#include "CustomerData.h"
#include <string>
#include <cstdlib> 
using namespace std;

//**********************************************
// Default Constructor                         *
//**********************************************

CustomerData::CustomerData() :
		PersonData() {

	customerNumber = 0;
	mailingList = true;
}
//**********************************************

//**********************************************
// Constructor                                 *
//**********************************************
CustomerData::CustomerData(int number, bool list, string last, string first,
		string add, string cit, string st, string zip) :
		PersonData(last, first, add, cit, st, zip) {

	customerNumber = number;
	mailingList = list;

}
//**********************************************	

//**********************************************
// Mutator functions                           *
//**********************************************

void CustomerData::setCustomerNumber(int number) {

	customerNumber = number;
}

void CustomerData::setMailingList(bool list) {

	mailingList = list;

}
//**********************************************

//**********************************************
// Accessor functions                          *
//**********************************************

int CustomerData::getCustomerNumber() {

	return customerNumber;
}

bool CustomerData::getMailingList() {

	return mailingList;
}

//**********************************************
