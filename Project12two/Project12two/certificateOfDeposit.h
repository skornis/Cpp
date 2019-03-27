#pragma once
#include <iostream>
#include "bankAccounts.h"

using namespace std;

class certificateOfDeposit : public bankAccounts{
public: 
	void createMonthlyStatement();
	certificateOfDeposit(string, int, double);
	void setCDTerms();
	void setCurrentBalance();

private: 
	int months;
	double interestRate;
	int currentMonth;
	double currentBalance;
	double getInterest();
};

/*certificateOfDeposit: A certificate of deposit account is a bank account. 
Therefore, it inherits all the properties of a bank account. 
In addition, it has instance variables to store the number of CD maturity months, interest rate, and the current CD month.

Write the definitions of the classes described in this programming exercise and a program to test your classes.*/