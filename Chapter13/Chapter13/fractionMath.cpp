#include <iostream>
#include <string>
#include <cmath>
#include "fractionMath.h"
#include "fractionType.h"

using namespace std;

fractionMath::fractionMath() : fractionType()
{ 
	selection = ' ';
	fractionOne = "";
	fractionTwo = "";
}

void fractionMath::setSelection()
{
	cout << "\n\nPlease make the appropriate selection to add, subtract, multiply or divide.";
	cout << "\n\t'A' to add";
	cout << "\n\t'S' to subtract";
	cout << "\n\t'M' to multiply";
	cout << "\n\t'D' to divide";
	cout << "\n\nPlease enter your selection: ";
	cin >> selection;
	selection = toupper(selection);
	cin.clear();
	cin.ignore(INT_MAX, '\n');
	validateSelection();
}

void fractionMath::validateSelection()
{
	switch (selection)
	{
	case 'A':
	case 'D':
	case 'S':
	case 'M':
	case 'X':
		break;
	default:
		cout << "\n***I'm sorry, you have made an invalid selection.***\n\n";
		system("pause");
		system("cls");
		cout << "\n\nPlease choose from the list below or you may enter 'X' to exit the program.";
		doFractionMath();
	}
}

void fractionMath::setFractionOne()
{
	cout << "\nPlease input the fractions in standard form. For example, one half would be entered as 1/2. ";
	doInput("\nPlease input the first fraction: ", fractionOne);
}

void fractionMath::setFractionTwo()
{
	doInput("\nPlease input the second fraction: ", fractionTwo);
}

void fractionMath::doInput(string message, string &frac)
{
	do
	{
		cout << message;
		getline(cin, frac);
		cin.clear();
	} while (isBad(frac) || frac.length() == 0);

}

bool fractionMath::isBad(string frac)
{
	int numSlashes = 0;
	bool foundBad = false;
	for (int i = 0; i < frac.length(); i++)
	{
		char chk = frac[i];
		if (chk > 46 && chk < 58)
		{
			if (chk == 47)
				numSlashes++;
		}
		else
		{
			foundBad = true;
		}

	}
	
	return foundBad || numSlashes > 1;
}

void fractionMath::doFractionMath()
{
	setSelection();

	fractionType *first = new fractionType();

	do{
		setFractionOne();
		first = new fractionType(fractionOne);	
		if (first->errorCode == 1)
			cout << "\nCan't divide by zero.";
	} while (first->errorCode != 0);

	fractionType *second = new fractionType();

	do
	{
		setFractionTwo();
		second = new fractionType(fractionTwo);
		if (second->errorCode == 1)
			cout << "\nCan't divide by zero.";
	} while (second->errorCode != 0);

	cout << "\n\n\tAnswer: ";

	if (selection == 'A')
	{
		fractionType answer = *first + *second;
		cout << fractionOne << " + " << fractionTwo << " = " << answer.getAnswer();
	}
	else if (selection == 'D')
	{
		fractionType answer = *first / *second;
		if (answer.errorCode != 1)
			cout << fractionOne << " / " << fractionTwo << " = " << answer.getAnswer();
		else
			cout <<  fractionOne << " / " << fractionTwo << " results in division by zero and is undefined.";
	}
	else if (selection == 'M')
	{
		fractionType answer = *first * *second;
		cout << fractionOne << " * " << fractionTwo << " = " << answer.getAnswer();
	}
	else if (selection == 'S')
	{
		fractionType answer = *first - *second;
		cout << fractionOne << " - " << fractionTwo << " = " << answer.getAnswer();
	}
	else if (selection == 'X')
	{
		system("pause");
		exit(0);
	}
	else
	{

	}
	doAnother();
}

void fractionMath::doAnother()
{
	cout << "\n\nWould you like to process another fraction problem?\nEnter 'Y' for yes or 'N' for no: ";
	cin >> selection;
	selection = toupper(selection);
	if (selection == 'Y')
	{
		system("cls");
		doFractionMath();
	}
	else
	{
		system("pause");
		exit(0);
	}
}