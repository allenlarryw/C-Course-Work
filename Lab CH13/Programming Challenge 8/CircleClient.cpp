// Chapter 13, Programming Challenge 8: Circle Class
#include "Circle.h" 
#include <iostream>
#include <iomanip>
#include <string> 
using namespace std;

// Demo program
int main() {

	// To hold a radius
	double raidus;
	//

	// Get the radius.
	cout << "Enter the Raidus of the cirlce: ";
	cin >> raidus;

	// Create a Circle object with the  specificed radius

	Circle circleObject(raidus);

	// Display the circle's data.
	cout << "Radius: " << circleObject.getRaidus() << endl;
	cout << "Area : " << circleObject.getArea() << endl;
	cout << "Diameter: " << circleObject.getDiameter() << endl;
	cout << "Circumference: " << circleObject.getCircumference() << endl;
	return 0;
}
