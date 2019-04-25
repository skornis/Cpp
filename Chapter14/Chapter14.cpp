#include <iostream>
#include <cmath>
#include "doMath.h"

using namespace std;

int main()
{
	cout << "\nThis is a program to perform basic mathematic functions. You may add, subtract, multiply or divide.";
	cout << "\nAvailable operations:";

	doMath newProblem;

	newProblem.printSolution();//starts the calculator functions and keeps running until user chooses exit option

	system("pause");
	return 0;
}