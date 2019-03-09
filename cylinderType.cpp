#include <iostream>
#include <string>
#include "cylinderType.h"

using namespace std;

void cylinderType::setRadius(double r) {
	if (r > 0)
		radius = r;
	else
		radius = 0;
}

void cylinderType::setHeight(double h) {
	if (h > 0)
		height = h;
	else
		height = 0;
}

double cylinderType::getVolume() {
	return PI * radius*radius*height;
}

double cylinderType::getArea() {
	return (2 * PI*radius*height) + (2 * PI*radius*radius);
}

cylinderType::cylinderType() {
	radius = 0;
	height = 0;
}

cylinderType::cylinderType(double r, double h) {
	setRadius(r);
	setHeight(h);
}
