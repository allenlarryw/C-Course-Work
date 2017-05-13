#include "Coin.h"   // Needed for the employee class
#include <iostream>   // Needed for cout
#include <cstdlib>    // Needed for the exit function
#include <ctime>
using namespace std;

Coin::Coin() // Default Constructor
{
	srand(time(0));

	int flip = rand() % 2 + 1;	// assign random numbers
	if (flip == 1)
		sideUp = "Heads"; 	   // Coins is on the Heads side.
	else
		sideUp = "Tails"; 	  // Coin is on the Tails side.

}

//***********************************************************
//  tosses Coin 20 times
//*********************************************************** 
void Coin::coinSimulator() {

	int tossed = 0;
	int heads = 0;
	int tails = 0;

	while (tossed < 20) {

		int flip = 1 + rand() % 2;	// assign random numbers

		if (flip == 1) {

			sideUp = "Heads"; 	   // Coins is on the Heads side.
			tossed++;
			heads++;
			cout << sideUp << endl;
		} else {

			sideUp = "Tails"; 	  // Coin is on the Tails side.
			tossed++;
			tails++;
			cout << sideUp << endl;

		}

	}
	cout << endl;
	cout << "Heads was facing up... " << heads << " times" << endl;
	cout << "Tails was facing up... " << tails << " times" << endl;

}

//***********************************************************
//  Gets what side the coin is facing up
//*********************************************************** 
string Coin::getSide() {

	return sideUp;
}
