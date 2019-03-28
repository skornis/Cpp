#pragma once
#include <iostream>
#include <string>
#include "bankAccounts.h"

using namespace std;

class savingsAccount : public bankAccounts {
public:
	void createMonthlyStatement();//creates monthly statement
	void setSavingsData();//sets all savings account parameters

	savingsAccount(string, int, double);//default constructor

private:
	double interestEarned;
	void setInterestEarned();//sets interest earned for statement period
	void setSavingsMonthlyBalance();//sets new monthly balance based on deposits and withdrawals and interest earned
};
