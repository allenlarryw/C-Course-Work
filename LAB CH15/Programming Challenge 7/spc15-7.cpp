// Chapter 15, Programming Challenge 7: PersonData and CustomerData classes
#include <iostream>
#include <iomanip>
#include "CustomerData.h"
using namespace std;

// Function prototype
void displayCustomer(CustomerData);

int main() {
	// Create a CustomerData object and pass arguments

	CustomerData customer1(123, false, "Whitley", "Allen", "124 apple road",
			"san antonio", "Texas", "78232");
	// to the constructor.

	// Display the object's data.
	cout << "Customer #1\n" << "-----------\n";
	displayCustomer(customer1);

	// Create another CustomerData object using the default
	CustomerData defaultConstructor;

	cout << "Default Customer \n" << "-----------\n";

	displayCustomer(defaultConstructor);

	// constructor and mutator functions.
	CustomerData customer2;

	customer2.setCustomerNumber(300);
	customer2.setMailingList(true);
	customer2.setLastName("Russo");
	customer2.setFirstName("Tom");
	customer2.setAddress("94 road park");
	customer2.setCity("New York City");
	customer2.setState("New york");
	customer2.setZipCode("74895");

	// Display the object's data.
	cout << "Customer #2\n" << "-----------\n";
	displayCustomer(customer2);
	return 0;
}

//******************************************************
// The displayCustomer function accepts a CustomerData *
// object as its argument and displays the object's    *
// data.                                               *
//******************************************************

void displayCustomer(CustomerData c) {
	// Display all the data but mailing list...
	cout << "Last Name: " << c.getLastName() << endl << "First Name: "
			<< c.getFirstName() << endl << "Address: " << c.getAddress() << endl
			<< "City: " << c.getCity() << endl << "State: " << c.getState()
			<< endl << "ZIP: " << c.getZip() << endl << "Customer Number: "
			<< c.getCustomerNumber() << endl << "Mailing List? ";

	// Dispaly Yes or No for mailing list.
	if (c.getMailingList())
		cout << "Yes\n\n";
	else
		cout << "No\n\n";
}
