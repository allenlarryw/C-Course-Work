#include "Circle.h"   // Needed for the employee class
#include <iostream>   // Needed for cout
#include <cstdlib>    // Needed for the exit function

using namespace std;

Circle::Circle() // Default Constructor 
{

	raidus = 0.0;

}

Circle::Circle(double raid) // 2nd Constructor
		{

	raidus = raid;

}

//***********************************************************
//  Sets Radius
//*********************************************************** 
void Circle::setRaidus(double raid) {

	raidus = raid;

}
//***********************************************************
//  Gets Radius
//*********************************************************** 
double Circle::getRaidus() {

	return raidus;
}

//***********************************************************
//  Gets Area
//*********************************************************** 
double Circle::getArea() {

	double area = (pi * raidus) * raidus;

	return area;
}

//***********************************************************
//  Gets Diameter
//*********************************************************** 
double Circle::getDiameter() {

	double diameter = raidus * 2.0;

	return diameter;
}

//***********************************************************
//  Gets Circumference
//*********************************************************** 
double Circle::getCircumference() {

	double circumference = (pi * 2.0) * raidus;

	return circumference;

}

