// Chapter 14, Programming Challenge 9: FeetInches Modification
#include <iostream>
#include "FeetInches.h"
using namespace std;

int main() {
	// Create three FeetInches objects.
	FeetInches one, two;

	// Get a distance for the first object.
	cout << "Enter a distance in feet and inches: " << endl;
	cin >> one;

	// Get a distance for the second object.
	cout << "Enter another distance in feet and inches: " << endl;
	cin >> two;

	// Test the != operator.
	if (one != two)
		cout << "The two are not equal.\n";

	// Test the >= operator.
	if (one >= two)
		cout << one << " is >= " << two << endl;

	// Test the <= operator.
	if (one <= two)
		cout << one << " is <= " << two << endl;

	return 0;
}
