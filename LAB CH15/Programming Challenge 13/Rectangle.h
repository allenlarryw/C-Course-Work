// Specification file for Rectangle derived class
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "BasicShape.h"

class Rectangle: public BasicShape {
private:
	// length, width

	long int width;
	long int length;

public:
	// functions: constructor, width, length, area

	Rectangle(long int wid, long int len);

	virtual void setArea();

	long int getWidth();

	long int getLength();

};

#endif
