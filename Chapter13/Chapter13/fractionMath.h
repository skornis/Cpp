#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include "fractionType.h"

using namespace std;

class fractionMath : public fractionType
{
public:
	fractionMath();//default constructor
	void doFractionMath();//calls member functions to create fractionType variables and perform mathematical operations on them
	void doAnother();//determines if user wishes to perform additional operations and allows for multiple calculations until user chooses to exit

private: 
	string fractionOne;
	string fractionTwo;

	char selection;

	void setSelection();//gets user selection for which mathematical operation they wish to perform
	void setFractionOne();//gets user input of first fraction in string form
	void setFractionTwo();//gets user input of second fraction in string form
	void doInput(string msg, string &frac);//processes user input to set fraction values
	bool isBad(string frac);//checks for valid user input
	void validateSelection();//checks to make sure user has input a valid choice and asks for new input if no valid selection made
};
