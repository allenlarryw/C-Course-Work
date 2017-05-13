#include <iostream> 
#include "TestScores.h"
#include <string>
#include <cstdlib> 
using namespace std;

TestScores::TestScores() {

	aptr = 0;
	arraySize = 0;

	cout << " I am the constructor";

}

TestScores::~TestScores() {

	cout << "This is the Destructor";
	delete[] aptr;
}

TestScores::TestScores(int test[]) {

	arraySize = NUM_SCORES;

	aptr = new int[arraySize];

	cout << "This is the Copied Array" << "  ";

	for (int count = 0; count < arraySize; count++) {

		*(aptr + count) = *(test + count);

		if ((aptr[count]) < 0) {

			throw NegativeScore(aptr[count]);
		}

		else {

			cout << (aptr[count]) << " ";
		}

	}

}

int TestScores::getAverage() {

	for (int i = 0; i < arraySize; i++) {

		average += aptr[i];

	}

	return average;
}

