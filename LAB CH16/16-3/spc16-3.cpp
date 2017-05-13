// Chapter 16, Programming Challenge 3: Minimum/Maximum Templates
#include<iostream>
#include <string>
using namespace std;

// Template for the minimum function

template<class T>
T minimum(T number1, T number2) {

	if (number1 < number2) {

		return number1;
	} else {
		return number2;
	}

}

// Template for the maximum function

template<class T>
T maximum(T number1, T number2) {

	if (number1 > number2) {

		return number1;
	} else {
		return number2;
	}

}

// The main function
int main() {
	// Test with int arguments.

	cout << minimum(10, 5);
	cout << endl << endl;

	cout << maximum(20, 130);
	cout << endl << endl;
	// Test with double arguments.

	cout << minimum(2.5, 5.6);
	cout << endl << endl;

	cout << maximum(20.8, 12.1);
	cout << endl << endl;

	// Test with string arguments.

	cout << minimum("hello", "Allen");
	cout << endl << endl;

	cout << maximum("POKEMON", "mudkiP");
	cout << endl << endl;
	return 0;
}
