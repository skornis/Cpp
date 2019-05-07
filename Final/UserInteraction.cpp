#include "UserInteraction.h"
#include <iostream>
#include <string>

using namespace std;

UserInteraction::UserInteraction() {
	
}

void UserInteraction::printWelcome() {
	cout << "This is a program to determine what month and day of the year a particular day number is.";
}

bool UserInteraction::doMore() {
	cout << "\n\nWould you like to perform another calculation?";
	return getYesOrNo();
}


bool UserInteraction::isLeapYear() {
	cout << "\n\n\nIs this a leap year?";
	return getYesOrNo();
}

bool UserInteraction::getYesOrNo(){
	char input;
	do {
		cout << "\nPlease enter Y for yes or N for no: ";
		cin >> input;
		cin.ignore(INT_MAX, '\n');
		input = toupper(input);
	} while (input != 'Y' && input != 'N');//loops through the input/output stream until the user chooses yes or no
	if (input == 'Y')
		return true;
	else
		return false;
}

int UserInteraction::getDayNumber(bool isLeap) {
	int input;
	int maxDayNumber;
	if (isLeap)
		maxDayNumber = 366;//if it's a leap year, allows the user to enter a day number up to 366
	else
		maxDayNumber = 365;
	cout << "\n\n\tYou may choose any number of day for the year to check the date.";
	do {
		cout << "\n\n\t\tPlease enter a valid day number from 1 through " << maxDayNumber << ": ";
		cin >> input;
		cin.clear();
		cin.ignore(INT_MAX, '\n');

	} while (cin.fail() || input > maxDayNumber || input < 1);//continues looping through output/input stream until the user enters a valid integer
	
	return input;
}
