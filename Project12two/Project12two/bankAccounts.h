#pragma once
#include <iostream>
#include <string>

using namespace std;

class bankAccounts{
public: 
	string getAccountHolderName();
	int getAccountNumber();
	double getBalance();
	double getInterestRate();
	void setInterestRate();
	void processWithdrawal();
	void processDeposit();

	virtual void createMonthlyStatement() = 0;


	string accountName;
	int accountNumber;
	double accountBalance;
	double deposit;
	double withdrawal;
	double interestRate;
	double currentBalance;

	bankAccounts(string, int, double);

private: 
	void setAccountHolderName(string);
	void setAccountNumber(int);
	void setBalance(double);
	void setCurrentBalance();
	void makeDeposit(double);
	void withdrawMoney(double);

};
