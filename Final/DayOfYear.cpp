#include <iostream>
#include <string>
#include "DayOfYear.h"

string DayOfYear::months[] = { "January", "February", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

int DayOfYear::daysInMonthsArray[] = { 31, 28, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

void DayOfYear::setMonthDay(bool isLeap) {
	int daysElapsed = 0;	
	for (int i = 0; i < 13; doLeapIncrement(i, isLeap))
	{
		daysElapsed = daysElapsed + daysInMonthsArray[i];//total number of days elapsed since January 1 through end of current month
		if (whatDayIsIt <= daysElapsed)
		{
			month = months[i];//sets the month name to the corresponding month from the string array of months

			day = daysInMonthsArray[i] - (daysElapsed - whatDayIsIt); /*calculates day of the month by subtracting the difference in inputted days and days elapsed through the end of the month from the total number of days in the current month*/

			monthDay = month + " " + to_string(day);//concatenates month string to add day to the string as well
			break;
		}
	}
}

void DayOfYear::doLeapIncrement(int &i, bool isLeap) {
	
	if (i == 0 && isLeap) //if it's January of the leap year, skip the first February in the array and jump to the 2nd February which accounts for the extra day
		i++;
	if (i == 1 && !isLeap) //if it's February of a non-leap year, skip the second February
		i++;	
	i++;
}

void DayOfYear::printMonthDay(bool isLeap) {
	setMonthDay(isLeap);
	cout << "\n\n\n\t\t***Day " << whatDayIsIt << " of the year is: " << monthDay << "***" ;
}

DayOfYear::DayOfYear(int number) {
	whatDayIsIt = number;
	day = 0;
	month = "";
	monthDay = "";
}
