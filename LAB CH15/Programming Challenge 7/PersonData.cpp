#include <iostream> 
#include "PersonData.h"
#include <string>
#include <cstdlib> 
using namespace std;

//**********************************************
// Default Constructor                         *
//**********************************************
PersonData::PersonData() {

	lastName = "";
	firstName = "";
	address = "";
	city = "";
	state = "";
	zipCode = "";

}
//**********************************************

//**********************************************
// Constructor                                 *
//**********************************************

PersonData::PersonData(string last, string first, string add, string cit,
		string st, string zip) {

	lastName = last;
	firstName = first;
	address = add;
	city = cit;
	state = st;
	zipCode = zip;
}
//**********************************************

//**********************************************
// Mutator functions                           *
//**********************************************

void PersonData::setLastName(string last) {

	lastName = last;

}

void PersonData::setFirstName(string first) {

	firstName = first;
}

void PersonData::setAddress(string add) {

	address = add;
}

void PersonData::setCity(string cit) {

	city = cit;
}

void PersonData::setState(string st) {

	state = st;
}

void PersonData::setZipCode(string zip) {

	zipCode = zip;
}
//**********************************************

//**********************************************
// Accessor functions                          *
//**********************************************

string PersonData::getLastName() {

	return lastName;
}

string PersonData::getFirstName() {

	return firstName;
}

string PersonData::getAddress() {

	return address;
}

string PersonData::getCity() {

	return city;
}

string PersonData::getState() {

	return state;
}

string PersonData::getZip() {

	return zipCode;
}
//**********************************************

