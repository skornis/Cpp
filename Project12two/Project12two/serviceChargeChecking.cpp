#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include "serviceChargeChecking.h"
#include "checkingAccounts.h"

using namespace std;

void serviceChargeChecking::processChecks() {
	int answer;
	cout << "\nDo you need to process any checks? Please enter the number of checks you would like to process: ";
	cin >> answer;

	if (answer <= checksAllowed) {
		for (int i = 0; i < answer; i++)
		{
			writeCheck();
		}
	}

	else if (answer > checksAllowed) 
	{
		cout << "\nI'm sorry, you are only allowed to write " << checksAllowed << " checks per month. Please enter a value between 0 and " << checksAllowed << ": ";
	}
}

void serviceChargeChecking::writeCheck() {
		ofstream check;
		string recipient;
		double amount;
		string fileName = "Service Charge Checking Check Number " + to_string(checksWritten + 1) + ".txt";
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

void serviceChargeChecking::createMonthlyStatement() {
	ofstream statement;
	setCheckingData();
	string fileName = accountName + " Monthly Statement.txt";
	statement.open(fileName);
	statement << "Name: " << accountName;
	statement << "\nAccount Number: " << accountNumber;
	statement << "\nAccount Type: Service Charge Checking";
	statement << "\nMonthly Service Charge: $" << serviceCharge;
	statement << "\nStarting Balance: $" << accountBalance;
	statement << "\nValue of Deposits: $" << deposit;
	statement << "\nValue of Withdrawals: $" << withdrawal;
	statement << "\nNumber of Checks Written: " << checksWritten;
	statement << "\nAmount Withdrawn From Checks Written: $" << amountOfChecks;
	statement << "\nCurrent Balance: $" << currentBalance - amountOfChecks - serviceCharge;
	statement.close();
}

serviceChargeChecking::serviceChargeChecking(string name, int account, double balance) : checkingAccounts (name, account, balance) {
	checksWritten = 0;
	amountOfChecks = 0;
}