// version 2
#ifndef TESTSCORES_H
#define TESTSCORES_H
#include <iostream>
#include "NegativeScore.h"
using namespace std;

// Constant for the number of test scores (used with 1 parameter version)
const int NUM_SCORES = 5;

class TestScores {
private:
	// Pointer to array of scores

	int testScores[NUM_SCORES];

	int (*aptr) = testScores;

	int arraySize;

	// Number of scores (optional - used with 2 parameter version)
	int average;

public:
	// Default constructor
	// Initialize variable to NULL

	TestScores();

	// Constructor (1 parameter)
	// Allocate memory for the array.
	// Copy the array (throw an error on negative value).

	TestScores(int test[]);

	badTestScores(int test[]);

	// Optional Constructor (2 parameters)
	// Assign number of scores from parameter.
	// Allocate memory for the array.
	// Copy the array (throw an error on negative value).

	// getAverage function

	int getAverage();

	// Destructor
	// Delete pointer

	~TestScores();

};

#endif
