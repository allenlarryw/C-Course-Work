#include <iostream> 
#include "Circle.h"
#include <string>
#include <cstdlib> 
using namespace std;

Circle::Circle(long int x, long int y, double rad) {

	centerX = x;
	centerY = y;
	raidus = rad;

	setArea();

}

long int Circle::getCenterY() {

	return centerY;
}

long int Circle::getCenterX() {

	return centerX;
}

void Circle::setArea() {

	area = (3.14159 * raidus * raidus);
}

