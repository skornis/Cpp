#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "doMath.h"

using namespace std;

void doMath::setOperand()
{
	cout << "\n\n\tA to add";
	cout << "\n\tS to subtract";
	cout << "\n\tM to multiply";
	cout << "\n\tD to divide";
	cout << "\n\tX to exit";
	cout << "\n\nPlease enter which operation you would like to perform: ";
	cin >> operand;
	cin.ignore(INT_MAX, '\n');
	operand = toupper(operand);
}
void doMath::printSolution()
{
	do {
		setOperand();
		switch (operand) {
		case 'A':
			system("cls");
			printAddition();
			break;
		case 'D':
			system("cls");
			printDivision();
			break;
		case 'M':
			system("cls");
			printMultiplication();
			break;
		case 'S':
			system("cls");
			printSubtraction();
			break;
		case 'X':
			break;
		default:
			cout << "\n\nI'm sorry, you have made an invalid entry.\n\n";
			system("pause");
			system("cls");
			printSolution();
			break;
		}
		cout << "\n\n";
		system("pause");
		system("cls");
	} while (operand != 'X');
};

void doMath::setNumbers()
{
	bool done = false;
	while (!done)
	{
		try//repeats input process until user enters a valid number
		{
			cout << "\nPlease enter the first number in the problem: ";
			doubleOne = getInput();
			done = true;
			cin.clear();
		}
		catch (const char ex[])
		{
			cout << ex; 
			cin.clear();
		}
	}

	done = false;

	while (!done)
	{
		try
		{
			cout << "\nPlease enter the second number in the problem: ";
			doubleTwo = getInput();

			done = true;
			cin.clear();
		}
		catch (const char ex[])
		{
			cout << ex; 	
			cin.clear();
		}
	}
};


double doMath::getInput()
{
	string numberLine;
	double number;
	getline(cin, numberLine);

	stringstream ss(numberLine);

	if (ss >> number) //checks to see if the string input contains anything but a valid number
	{
		if (ss.eof()) // checks to make sure there are no additional characters after the valid number
		{  
			return number; // no extras found
		}
	}
	throw "\n\nError inputting number.";	
}

bool doMath::checkDenominator()
{
	if (doubleTwo == 0)
	{
		cout << "\nI'm sorry Dave, I cannot allow you to do that.\nDivision by zero will result in an error, you cannot perform this function.";
		return false;
	}
	return true;
};

void doMath::printAddition()
{
	setNumbers();
	doubleAnswer = doubleOne + doubleTwo;
	cout << "\n\n\t" << doubleOne << " + " << doubleTwo << " = " << doubleAnswer << "\n\n";
};


void doMath::printDivision()
{
	setNumbers();
	if (checkDenominator())
	{
		doubleAnswer = doubleOne / doubleTwo;
		cout << "\n\n\t" << doubleOne << " / " << doubleTwo << " = " << doubleAnswer << "\n\n";
	};
}

void doMath::printMultiplication()
{
	setNumbers();
	doubleAnswer = doubleOne * doubleTwo;
	cout << "\n\n\t" << doubleOne << " * " << doubleTwo << " = " << doubleAnswer << "\n\n";
};

void doMath::printSubtraction()
{
	setNumbers();
	doubleAnswer = doubleOne - doubleTwo;
	cout << "\n\n\t" << doubleOne << " - " << doubleTwo << " = " << doubleAnswer << "\n\n";
};

doMath::doMath()
{
	doubleOne = 0;
	doubleTwo = 0;
	doubleAnswer = 0;
	operand = ' ';
};