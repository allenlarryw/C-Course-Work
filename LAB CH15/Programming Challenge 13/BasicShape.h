// Specification file for BasicShape base class
#ifndef BASICSHAPE_H
#define BASICSHAPE_H

class BasicShape {
protected:
	// area

	double area;

public:
	// functions: area

	double getArea();

	virtual void setArea() = 0;

};

#endif
