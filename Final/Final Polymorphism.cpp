#include<iostream>
#include <string>
using namespace std;

// super class
class Ship {
private:
	// data members
	string shipName;
	string yearMade;
public:
	// Default constructor
	Ship() {

		shipName = "";
		yearMade = "";
	}
	// Constructor
	Ship(string ship, string year) {
		shipName = ship;
		yearMade = year;
	}
	// Accessors
	string getShipName() {
		return shipName;
	}

	string getYearMade() {
		return yearMade;
	}

	// Mutators
	void setShipName(string ship) {
		shipName = ship;
	}

	void setYearMade(string year) {
		yearMade = year;
	}
	// virtuals
	virtual void PrintInfo() = 0;
};

// sub class
class CruiseShip: public Ship {
private:
	// data members
	int maxPassengers;

public:
	// Default constructor
	CruiseShip() :
			Ship() {

		int maxPassengers = 0;
	}

	// Constructor
	CruiseShip(int passengers, string shipName, string yearMade) :
			Ship(shipName, yearMade) {

		maxPassengers = passengers;

	}
	// Accessor
	int getMaxPassengers() {

		return maxPassengers;
	}
	// Mutators
	void setMaxPassengers(int passengers) {

		maxPassengers = passengers;
	}

	// PrintInfo()
	void virtual PrintInfo() {

		cout << getShipName() << " " << getYearMade() << " "
				<< getMaxPassengers();

	}

};

// sub class
class CargoShip: public Ship {
private:
	// data members
	int tonnage;

public:
	// Default constructor
	CargoShip() :
			Ship() {

		tonnage = 0;
	}
	// Constructor
	CargoShip(int weight, string shipName, string yearMade) :
			Ship(shipName, yearMade) {

		tonnage = weight;

	}
	// Accessor
	int getTonnage() {

		return tonnage;
	}
	// Mutators

	void setTonnage(int weight) {

		tonnage = weight;
	}

	// PrintInfo()

	void virtual PrintInfo() {

		cout << getShipName() << " " << getYearMade() << " " << getTonnage();

	}

};

// client
int main() {
	// Create a Cruise Ship object
	CruiseShip theCruiseShip(3000, "The Cruise Ship", "2000");
	// Set all the data members

	CruiseShip settingCruiseShip;

	settingCruiseShip.setShipName("The Phantom");
	settingCruiseShip.setYearMade("1992");
	settingCruiseShip.setMaxPassengers(1000);

	// Create a Cargo Ship object
	CargoShip theCargoShip(60000, "The Cargo Ship", "1965");
	//Set all the data members

	CargoShip settingCargoShip;

	settingCargoShip.setShipName("The Void");
	settingCargoShip.setYearMade("2016");
	settingCargoShip.setTonnage(100000);

	// call PrintInfo() for both the cruise ship and cargo ship class
	theCruiseShip.PrintInfo();

	cout << endl << endl;

	theCargoShip.PrintInfo();

	cout << endl << endl;

	settingCruiseShip.PrintInfo();

	cout << endl << endl;

	settingCargoShip.PrintInfo();

	// delete the pointers  WHAT ?? THIS SAYS NOTHING ABOUT POINTERS IN CAPS SO YOU CAN SEE THIS , THE PROGRAM NEVER MENTIONS CREATING A POINTER EVER JUST DELETING IT ???

	return 0;
}
