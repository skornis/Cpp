#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include "highInterestChecking.h"
#include "bankAccounts.h"
#include "checkingAccounts.h"

using namespace std;

void highInterestChecking::processChecks() {
	int answer;
	cout << "Please enter the number of checks you would like to process: ";
	cin >> answer;
	for (int i = 0; i < answer; i++)
	{
		writeCheck();
	}
}

void highInterestChecking::writeCheck() {
	ofstream check;
	string recipient;
	double amount;
	string fileName = "No Charge Checking Check Number " + to_string(checksWritten + 1) + ".txt";
	check.open(fileName);
	cin.clear();
	cin.ignore();
	cout << "\nPlease enter the name of the recipient: ";
	getline(cin, recipient);
	cout << "\nPlease enter the amount of the check: $";
	cin >> amount;
	check << "Name of recipient: " << recipient;
	check << "\nAmount: $" << amount;
	amountOfChecks += amount;
	checksWritten++;
}

void highInterestChecking::setInterestAccrued() {
	accruedInterest = (ceil(currentBalance * interestRate / 12) / 100);
}

void highInterestChecking::createMonthlyStatement() {
	ofstream statement;
	setCheckingData();
	setInterestAccrued();
	string fileName = accountName + " Monthly Statement.txt";
	statement.open(fileName);
	statement << "Name: " << accountName;
	statement << "\nAccount Number: " << accountNumber;
	statement << "\nAccount Type: High Interest Checking";
	statement << "\nStarting Balance: $" << accountBalance;
	statement << "\nValue of Deposits: $" << deposit;
	statement << "\nValue of Withdrawals: $" << withdrawal;
	statement << "\nNumber of Checks Written: " << checksWritten;
	statement << "\nAmount Withdrawn From Checks Written: $" << amountOfChecks;
	statement << "\nAccrued Interest: $" << accruedInterest;
	statement << "\nCurrent Balance: $" << currentBalance + accruedInterest - amountOfChecks;
	statement.close();
}

highInterestChecking::highInterestChecking(string name, int account, double balance) : checkingAccounts(name, account, balance) {
	checksWritten = 0;
	amountOfChecks = 0;
	setInterestRate();
}