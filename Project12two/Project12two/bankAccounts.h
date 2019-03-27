#pragma once
#include <iostream>
#include <string>

using namespace std;

class bankAccounts {
public: 
	string getAccountHolderName();
	int getAccountNumber();
	double getBalance();
	virtual void createMonthlyStatement() = 0;
	string accountName;
	int accountNumber;
	double accountBalance;

	bankAccounts(string, int, double);

private: 
	void setAccountHolderName(string);
	void setAccountNumber(int);
	void setBalance(double);
	void makeDeposit(double);
	void withdrawMoney(double);


};

/*bankAccount: Every bank account has an account number, the name of the owner, and a balance. 
Therefore, instance variables such as name, accountNumber, and balance should be declared in the abstract class bankAccount. 
Some operations common to all types of accounts are retrieve account owner’s name, account number, and account balance;
make deposits; withdraw money; and create monthly statements. 
So include functions to implement these operations. Some of these functions will be pure virtual.*/