#pragma once
#include <iostream>

using namespace std;

static class UserInteraction
{
public:
	UserInteraction();
	static void printWelcome();
	static bool isLeapYear();
	static int getDayNumber(bool);
	static bool doMore();
	static bool getYesOrNo();
};

