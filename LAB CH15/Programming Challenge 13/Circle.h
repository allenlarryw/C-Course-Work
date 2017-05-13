// Specification file for Circle derived class
#ifndef CIRCLE_H
#define CIRCLE_H
#include "BasicShape.h"

class Circle: public BasicShape {
private:
	// x, y, radius

	long int centerX;
	long int centerY;
	double raidus;

public:
	// functions: constructor, x, y, area

	Circle(long int x, long int y, double rad);

	virtual void setArea();

	long int getCenterY();
	long int getCenterX();

};

#endif
