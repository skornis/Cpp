#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include "bankAccounts.h"
#include "certificateOfDeposit.h"

using namespace std;

void certificateOfDeposit::setCDTerms() {
	cout << "\nPlease enter the length of the CD terms in months: ";
	cin >> months;
	cin.clear();
	cout << "\nPlease enter the current month of the CD. For example, if this is the first month since opening the CD, enter 1: ";
	cin >> currentMonth;
	cin.clear();
	cout << "\nPlease enter the interest rate of the CD in decimal format. For example 5% would be entered as 5.0 or 5: ";
	cin >> interestRate;
}

double certificateOfDeposit::getInterest() {
	return ceil(accountBalance * interestRate / 12 * currentMonth)/100;
}

void certificateOfDeposit::setCurrentBalance() {
	currentBalance = accountBalance + getInterest();
}

void certificateOfDeposit::createMonthlyStatement() {
	ofstream statement;
	string fileName = accountName + " Monthly Statement.txt";
	statement.open(fileName);
	statement << "Name: " << accountName << endl;
	statement << "Account Type: CD" << endl;
	statement << "Account Terms: " << months << endl;
	statement << "Current Month: " << currentMonth << endl;
	statement << "Account Number: " << accountNumber << endl;
	statement << "Original Balance: " << accountBalance << endl;
	statement << "Current Balance: " << currentBalance << endl;
	statement << "Interest Accrued to Date: " << getInterest();
	statement.close();
}

certificateOfDeposit::certificateOfDeposit(string name, int number, double balance): bankAccounts(name, number, balance) {
	months = 0;
	interestRate = 0;
	currentMonth = 0;
}