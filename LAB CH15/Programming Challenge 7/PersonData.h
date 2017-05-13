// PersonData class
#ifndef PERSONDATA_H
#define PERSONDATA_H
#include <string>
using namespace std;

class PersonData {
private:
	// The person's last name
	string lastName;
	// The person's first name
	string firstName;
	// The person's address
	string address;
	// The person's city
	string city;
	// The person's state
	string state;
	// The person's ZIP code
	string zipCode;

public:

	//**********************************************
	// Default Constructor                          *
	//**********************************************

	PersonData();

	//**********************************************
	// Constructor                                 *
	//**********************************************

	PersonData(string last, string first, string add, string cit, string stat,
			string zip);

	//**********************************************
	// Mutator functions                           *
	//**********************************************
	void setLastName(string last);
	void setFirstName(string first);
	void setAddress(string add);
	void setCity(string cit);
	void setState(string st);
	void setZipCode(string zip);

	//**********************************************
	// Accessor functions                          *
	//**********************************************
	string getLastName();
	string getFirstName();
	string getAddress();
	string getCity();
	string getState();
	string getZip();

};

#endif
