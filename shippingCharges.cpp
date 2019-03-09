#include <iostream>
#include <string>
#include "cylinderType.h"
#include "shippingCharges.h"

using namespace std;


void shippingCharges::setCost(double c) {
	if (c > 0)
		cost = c;
	else
		cost = 0;
}

double shippingCharges::getCubicLiters() {
	double volume = getVolume();
	return CUBIC_LITERS_PER_CUBIC_F00T * volume;
}

double shippingCharges::getShippingCharges() {
	double volume = getCubicLiters();
	return volume * cost;
}

shippingCharges::shippingCharges(double c, double r, double h) : cylinderType( r,  h) {
	setCost(c);
}
