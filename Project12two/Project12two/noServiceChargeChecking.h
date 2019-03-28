#pragma once
#include <iostream>
#include <string>
#include "checkingAccounts.h"

using namespace std;

class noServiceChargeChecking : public checkingAccounts {
public:
	void createMonthlyStatement();//creates monthly statement
	void writeCheck();//write check

	noServiceChargeChecking(string, int, double);//default constructor

private:
	int checksWritten;//tracks number of checks written
	double amountOfChecks;//tracks balance of checks written
	void processChecks();//calculates new balances based on checks written
};