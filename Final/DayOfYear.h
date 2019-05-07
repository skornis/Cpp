#pragma once
#include <iostream>
#include <string>

using namespace std;



class DayOfYear {

	void setMonthDay(bool);//sets date in month and day number format based on if it's a leap year or not
	void doLeapIncrement(int &, bool);//used in place of ++ increment in for loop to allow for proper iteration through month and dayNumber arrays depending on if leap year or not

	static string months[13];//array to hold the names of all the months of the year (February listed twice to account for leap year)
	static int daysInMonthsArray[13];//array to hold the number of days in each month (February listed twice to account for leap year)

	int whatDayIsIt;//this is the number entered by the user and is what is converted to month day format
	string month;
	string monthDay;//holds a string to represent both the month and the day corresponding to the inputted number
	int day;

public:
	DayOfYear(int);//default constructor, passes in integer to create the dayNumber
	void printMonthDay(bool);//takes a bool to determine if it's a leap year and then prints what the inputted day is month and day format
};
