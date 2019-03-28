#pragma once
#include <iostream>
#include <string>
#include "checkingAccounts.h"

using namespace std;

class serviceChargeChecking : public checkingAccounts {
public:
	void createMonthlyStatement();//creates statement for service charge checking account
	void writeCheck();//writes check for service charge checking

	serviceChargeChecking(string, int, double);//default constructor

private:
	int checksWritten;//keeps track of number of checks written
	double amountOfChecks;//keeps track of balance written by checks
	double const serviceCharge = 5.00;//default service charge
	int const checksAllowed = 5;//maximum allowed checks
	void processChecks();//determines how many checks user wishes to write and processes them
};
