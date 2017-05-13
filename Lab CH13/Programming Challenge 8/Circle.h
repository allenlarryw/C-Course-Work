// Circle class declaration
#ifndef CIRCLE_H
#define CIRCLE_H
class Circle {
private:
	// To hold a value for pi
	double pi = 3.14159;
	// To hold the radius
	double raidus;

	//

public:
	// The default constructor sets
	// radius to 0.0 and pi to 3.14159.

	Circle();

	// The overloaded constructor accepts
	// the radius as an arguemnt.
	Circle(double raid);

	// Mutator function for the radius
	void setRaidus(double raid);

	// Accessor function for the radius
	double getRaidus();

	// The getArea function returns the
	// circle's area.
	double getArea();

	// The getDiameter function returns the
	// circle's diameter.

	double getDiameter();

	// The getCircumference function returns
	// the circle's circumference.
	double getCircumference();

};
#endif
