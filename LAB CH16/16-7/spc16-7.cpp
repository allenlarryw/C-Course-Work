// Chapter 16, Programming Challenge 7: TestScores class
#include <iostream>
#include "TestScores.h"
#include "NegativeScore.h"
using namespace std;

int main() {
	// Constant for the number of test scores
	const int NUM_SCORES = 5;

	try {
		// Create an array of valid scores.
		int myScores[NUM_SCORES] = { 88, 90, 93, 87, 99 };

		// Create a TestScores object.
		//TestScores myTestScores(myScores, NUM_SCORES); // optional constructor
		TestScores myTestScores(myScores);

		// Display the average.
		cout << endl << endl;
		cout << "The Average Score is ";
		cout << myTestScores.getAverage() << endl << endl;

		// Create an array with an invalid score.
		int badScores[NUM_SCORES] = { 88, 90, -99, 87, 99 };

		// Create a TestScores object
		//TestScores badTestScores(badScores, NUM_SCORES); // optional constructor
		TestScores badTestScores(badScores);

		// Display the average.
		cout << endl << endl << "The Average Score is ";
		cout << badTestScores.getAverage() << endl;
	} catch (NegativeScore e) {
		cout << endl << endl << "An invalid score was found. The "
				<< "invalid score is ";

		cout << e.getScore();

		// display invalid score from exception

	}

	return 0;
}
