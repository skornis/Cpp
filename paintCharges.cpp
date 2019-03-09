#include <iostream>
#include <string>
#include "cylinderType.h"
#include "paintCharges.h"

using namespace std;


void paintCharges::setPaintCost(double c) {
	if (c > 0)
		paintCost = c;
	else
		paintCost = 0;
}

double paintCharges::getPaintCharges() {
	double area = getArea();
	return area * paintCost;
}


paintCharges::paintCharges(double c, double r, double h) : cylinderType(r, h) {
	setPaintCost(c);
}