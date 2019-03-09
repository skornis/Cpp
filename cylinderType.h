#pragma once
#include <iostream>
#include <string>

using namespace std;

class cylinderType {
private:
	const double PI = 3.14159;//constant value of PI for calculations
	double radius = 0;
	double height = 0;

public:
	
	double getVolume();//calculates & returns the volume of the container
	double getArea();//calculates & returns the area of the container
	void setRadius(double r);//sets the radius of the container
	void setHeight(double h);//sets the height of the container

	cylinderType(double r, double h);//constructor, passes radius and height 
	cylinderType();
};
