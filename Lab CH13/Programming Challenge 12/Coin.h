// Specification file for the Coin class
#ifndef COIN_H
#define COIN_H
#include <string>
using namespace std;

class Coin {
private:
	// The side facing up
	string sideUp;

public:
	// Constructor

	Coin();

	// Simulates tossing of the coin

	void coinSimulator();

	// Returns the side facing up
	string getSide();
};

#endif
