#include <iostream>
#include <string>
#include "bankAccounts.h"
#include "certificateOfDeposit.h"

using namespace std;

int main()
{
	string name;
	int number;
	double balance;

	cout << "\nPlease enter the customer's name, account number and balance, separated by spaces: ";

	cin >> name >> number >> balance;

	bankAccounts *acc;
	certificateOfDeposit d(name, number, balance);
	d.setCDTerms();
	d.setCurrentBalance();
	acc = &d;

	acc->createMonthlyStatement();

	system("pause");
	return 0;
}

