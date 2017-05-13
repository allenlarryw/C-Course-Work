//  Chapter 13, Programming Challenge 13: Pure Abstract Base Class Project

//	Driver program is used to test the BasicShape (Abstract Base Class), Circle 
//  (Derived Class) and Rectangle (Derived class).
//  The program asks for needed information for both a circle and rectangle and 
//  returns the area.

#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main() {
	long x, y, length, width;
	double rad;

	// Demonstrate a Circle.
	cout << "Please enter the x coordinate of the circle's center: ";
	cin >> x;
	cout << "Please enter the y coordinate of the circle's center: ";
	cin >> y;
	cout << "Please enter the radius of the circle: ";
	cin >> rad;
	Circle c(x, y, rad);

	cout << "The area of the circle is " << c.getArea() << ".";

	// Demonstrate a Rectangle.
	cout << "\n\nPlease enter the length of the rectangle: ";
	cin >> length;
	cout << "Please enter the width of the rectangle: ";
	cin >> width;
	Rectangle r(width, length);
	cout << "The area of the rectangle is " << r.getArea() << ".\n";

	return 0;
}

