#include <iostream>
#include <string>
#include <fstream>
#include "bankAccounts.h"

using namespace std;

void bankAccounts::setAccountHolderName(string name){
	accountName = name;
}

void bankAccounts::setAccountNumber(int number) {
	accountNumber = number;
}

void bankAccounts::setBalance(double balance) {
	accountBalance = balance;
}

string bankAccounts::getAccountHolderName() {
	return accountName;
}

int bankAccounts::getAccountNumber() {
	return accountNumber;
}

double bankAccounts::getBalance() {
	return accountBalance;
}

void bankAccounts::processDeposit() {
	cout << "\nPlease enter the amount deposited to the account: $";
	cin >> deposit;
	makeDeposit(deposit);
}

void bankAccounts::setCurrentBalance() {
	currentBalance = accountBalance;
}

void bankAccounts::makeDeposit(double deposit) {
	currentBalance = currentBalance + deposit;
}

void bankAccounts::processWithdrawal() {
	cout << "\nPlease enter the amount withdrawn from the account: $";
	cin >> withdrawal;
	withdrawMoney(withdrawal);
}

void bankAccounts::withdrawMoney(double withdrawal) {
	currentBalance = currentBalance - withdrawal;
}

void bankAccounts::setInterestRate() {
	cin.clear();
	cout << "\nPlease enter the interest rate in decimal format. For example 5% would be entered as 5.0 or 5: ";
	cin >> interestRate;
	cin.clear();
}

double bankAccounts::getInterestRate() {
	return interestRate;
}

bankAccounts::bankAccounts(string name, int number, double balance) {
	setAccountHolderName(name);
	setAccountNumber(number);
	setBalance(balance);
	setCurrentBalance();
	deposit = 0;
	withdrawal = 0;
}