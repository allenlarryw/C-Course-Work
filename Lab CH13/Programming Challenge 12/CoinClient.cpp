// Chapter 13, Programming Challenge 12: Coin Toss Simulator
#include <iostream>
#include "Coin.h"

int main() {
	// Variables
	// To hold the number of times heads is facing up
	int numberHeads;
	// To hold the number of times tails is facing up
	int numberTails;
	// Create an instance of the Coin class.

	Coin coinObject;

	// Display the side that is initially facing up.
	cout << "The side initially facing up is: " << coinObject.getSide() << endl
			<< endl;

	cout << "Now tossing the coin 20 times... " << endl << endl;

	// Toss the coin 20 times.
	coinObject.coinSimulator();

	return 0;
}
