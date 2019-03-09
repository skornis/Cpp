#pragma once
#include <iostream>
#include <string>
#include "cylinderType.h"

using namespace std;

class paintCharges : public cylinderType {
private:
	void setPaintCost(double c);//sets the cost of the paint
	double paintCost;

public: 
	double getPaintCharges();//retrieves the total cost to paint the container
	paintCharges(double, double, double); //constructor - passes value to paint cost as well as to the base class to instantiate a container with radius & height listed
};

