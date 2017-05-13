#include <iostream> 
#include "Rectangle.h"
#include <string>
#include <cstdlib> 
using namespace std;

Rectangle::Rectangle(long int wid, long int len) {

	width = wid;
	length = len;

	setArea();
}

long int Rectangle::getWidth() {

	return width;
}

long int Rectangle::getLength() {

	return length;
}

void Rectangle::setArea() {

	area = (length * width);

}

