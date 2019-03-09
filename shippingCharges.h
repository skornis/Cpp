#pragma once
#include <iostream>
#include <string>
#include "cylinderType.h"

using namespace std;

class shippingCharges : public cylinderType {
private:
	void setCost(double c);//sets the cost per unit for shipping
	double getCubicLiters();//calculates & returns total cubic liters based on cubic feet entered
	double cost;

public:
	const double CUBIC_LITERS_PER_CUBIC_F00T = 28.32;
	double getShippingCharges();//calculates & returns total shipping charges
	shippingCharges(double , double , double  );//constructor to initialize cost value & instantiate container
};


