#pragma once
#include <iostream>
#include "bankAccounts.h"

using namespace std;

class certificateOfDeposit : public bankAccounts {
public:
	void createMonthlyStatement();//create monthly statement
	certificateOfDeposit(string, int, double);//default constructor

private:
	int months;
	int currentMonth;
	double currentInterest;

	void setMonths();//sets number of months for cd term
	void setCurrentMonth();//sets current month of cd term
	void setCurrentInterest();//sets interest earned to date
	void setCurrentBalance();//calculates current balance
	double getCurrentBalance();//returns current balance
	double getCurrentInterest();//returns current interest earned
	void setCDTerms();//sets all cd parameters
};