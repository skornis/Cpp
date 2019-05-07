#include <iostream>
#include <string>
#include "DayOfYear.h"
#include "UserInteraction.h"

using namespace std;

int main()
{
	UserInteraction userInput;

	userInput.printWelcome();

	do {
		bool isLeap = userInput.isLeapYear();
		int dayNumber = userInput.getDayNumber(isLeap);

		DayOfYear newDay(dayNumber);
		newDay.printMonthDay(isLeap);
	} while (userInput.doMore());

	cout << "\n\n";
	system("pause");
	return 0;
}
