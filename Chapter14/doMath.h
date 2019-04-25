#pragma once
#include <iostream>

using namespace std;

class doMath {
public: 	
	doMath();//default constructor, set all variables to zero
	void printSolution();//public function that is called and uses user input to perform various mathematical functions
	
private: 
	double doubleOne;
	double doubleTwo;
	double doubleAnswer;
	char operand;

	void setOperand();//gets users math operation choice
	void setNumbers();//sets the first and second numbers
	void printAddition();//prints the problem and answer if user chooses to add
	void printDivision();//prints the problem and answer if user chooses to divide
	void printMultiplication();//prints the problem and answer if user chooses to multiply
	void printSubtraction();//prints the problem and answer if user chooses to subtract

	double getInput();//gets user input and tests to make sure it is a valid number

	bool checkDenominator();//checks to make sure denominator is not zero for division problems
};
