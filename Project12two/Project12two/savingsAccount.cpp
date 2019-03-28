#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include "bankAccounts.h"
#include "savingsAccount.h"

using namespace std;

void savingsAccount::setSavingsMonthlyBalance() {
	processDeposit();
	processWithdrawal();
}

void savingsAccount::setInterestEarned() {
	interestEarned = ceil(currentBalance * interestRate / 12) / 100;
}

void savingsAccount::setSavingsData() {
	setInterestRate();
	setSavingsMonthlyBalance();
	setInterestEarned();
}

void savingsAccount::createMonthlyStatement() {
	ofstream statement;
	setSavingsData();
	string fileName = accountName + " Monthly Statement.txt";
	statement.open(fileName);
	statement << "Name: " << accountName;
	statement << "\nAccount Number: " << accountNumber;
	statement << "\nAccount Type: Savings";
	statement << "\nStarting Balance: $" << accountBalance;
	statement << "\nValue of Deposits: $" << deposit;
	statement << "\nValue of Withdrawals: $" << withdrawal;
	statement << "\nAccrued Interest: $" << interestEarned;
	statement << "\nCurrent Balance: $" << currentBalance + interestEarned;
	statement.close();
}


savingsAccount::savingsAccount(string name, int number, double balance) : bankAccounts(name, number, balance) {
}
