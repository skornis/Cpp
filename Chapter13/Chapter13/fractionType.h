#pragma once
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class fractionType 
{
public: 
	friend fractionType operator+(fractionType, fractionType);//overloads addition operator to allow addition of two fractions
	friend fractionType operator-(fractionType, fractionType);//overloads subtraction operator to allow subtraction of two fractionType operator*(const fractionType&) const;//overloads multiplicaton operator to allow multiiplcation of two fractions
	friend fractionType operator/(fractionType, fractionType);//overloads division operator to allow division of two fractions
	friend fractionType operator*(fractionType, fractionType);//overloads multiplication operator to allow multiplication of two fractions

	string getAnswer();//returns the calculated answer as a fraction in string form

	fractionType();//default constructor to initialize variables to 0 if none are provided
	fractionType(string);//default constructor to initialize fraction variable and set numerator and denominator when fraction is provided

	int numerator;
	int denominator;

	int errorCode;  // 0 = OK, 1 = divide by zero
				 

private:
	void setNumeratorAndDenominator();//parses and converts string variable to set the numerator and denominator in integer form
	void setNewFraction();//checks numerator and denominator for common divisors and reduces the fraction to lowest form

	string fraction;//fraction variable from user input
};
