// version 2
#ifndef NEGATIVESCORE_H
#define NEGATIVESCORE_H

class NegativeScore {
private:
	// Variable to hold the bad score
	int invalidScore;
public:
	// Constructor

	NegativeScore(int score) {

		invalidScore = score;

	}
	// getScore function

	int getScore() {

		return invalidScore;

	}

};

#endif
