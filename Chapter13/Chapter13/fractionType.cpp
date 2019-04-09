#include <iostream>
#include <string>
#include "fractionType.h"
#include "fractionMath.h"

using namespace std;

fractionType::fractionType(string input)
{
	fraction = input;
	setNumeratorAndDenominator();
}

fractionType::fractionType()
{
	fraction = "";
	numerator = 0;
	denominator = 0;
	errorCode = 0;
}

void fractionType::setNumeratorAndDenominator()
{
	int divisor = 0;
	string num = "";
	string denom = "";
	divisor = fraction.find("/");//finds the position of the division symbol in the fraction input string
	
	if (divisor == -1)
	{
		numerator = stoi(fraction);
		denominator = 1;
	}
	else
	{
		num = fraction.substr(0, divisor);//finds the numerator in string form
		numerator = stoi(num);//converts string numerator to integer
		denom = fraction.substr(divisor + 1, fraction.length() - divisor - 1);//finds denominator in string form
		denominator = stoi(denom);//converts string denominator to integer
	}
	if (denominator == 0)
		errorCode = 1;
	else
		errorCode = 0;
	setNewFraction();
}

fractionType operator+(fractionType one, fractionType two)
{
	fractionType answer;
	answer.numerator = one.numerator * two.denominator + one.denominator * two.numerator;
	answer.denominator = one.denominator * two.denominator;
	return answer;
}

fractionType operator-(fractionType one, fractionType two)
{
	fractionType answer;
	answer.numerator = one.numerator * two.denominator - one.denominator * two.numerator;
	answer.denominator = one.denominator * two.denominator;
	return answer;
}

fractionType operator*(fractionType one, fractionType two)
{
	fractionType answer;
	answer.numerator = one.numerator * two.numerator;
	answer.denominator = one.denominator * two.denominator;
	return answer;
}

fractionType operator/(fractionType one, fractionType two)
{
	fractionType answer;
	answer.numerator = one.numerator * two.denominator;
	answer.denominator = one.denominator * two.numerator;

	if (answer.denominator == 0)
		answer.errorCode = 1;
	else
		answer.errorCode = 0;
	return answer;
}

string fractionType::getAnswer()
{
	string answer;
	setNewFraction();
	if (denominator != 1)
	{
		answer = to_string(numerator) + "/" + to_string(denominator);
	}
	else
	{
		answer = to_string(numerator);
	}
	return answer;
}

void fractionType::setNewFraction()
{
	for (int i = 2; i <= denominator; i++)
	{
		if (numerator % i == 0 && denominator % i == 0)
		{
			numerator = numerator / i;
			denominator = denominator / i;
		}
	}
}

