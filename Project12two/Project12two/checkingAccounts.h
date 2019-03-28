#pragma once
#include <iostream>
#include <string>
#include "bankAccounts.h"

using namespace std;

class checkingAccounts : public bankAccounts {
public: 
	virtual void createMonthlyStatement() = 0;//virtual function to be instantiated by member classes
	virtual void writeCheck() = 0;
	virtual void processChecks() = 0;
	void setCheckingData();//sets information for checking account

	checkingAccounts(string, int, double);
};
