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

void bankAccounts::makeDeposit(double deposit) {
	accountBalance = accountBalance + deposit;
}

void bankAccounts::withdrawMoney(double withdrawal) {
	accountBalance = accountBalance - withdrawal;
}

bankAccounts::bankAccounts(string name, int number, double balance) {
	setAccountHolderName(name);
	setAccountNumber(number);
	setBalance(balance);
}