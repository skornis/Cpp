#pragma once
#include <iostream>
#include <string>
#include "checkingAccounts.h"

using namespace std;

class highInterestChecking : public checkingAccounts {
public:
	void createMonthlyStatement();//creates monthly statement
	void writeCheck();//write check

	highInterestChecking(string, int, double);//default constructor

private:
	int checksWritten;
	double accruedInterest;
	void setInterestAccrued();//sets interest accrued to date
	double amountOfChecks;
	void processChecks();//calculates account information based on checks written and processes checks
};
