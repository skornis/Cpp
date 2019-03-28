#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include "bankAccounts.h"
#include "checkingAccounts.h"

using namespace std;

void checkingAccounts::setCheckingData() {
	processDeposit();
	processWithdrawal();
	processChecks();
}

checkingAccounts::checkingAccounts(string name, int account, double balance) : bankAccounts(name, account, balance) {

}