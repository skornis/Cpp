#include <iostream>
#include <string>
#include "bankAccounts.h"
#include "certificateOfDeposit.h"
#include "savingsAccount.h"
#include "checkingAccounts.h"
#include "serviceChargeChecking.h"
#include "noServiceChargeChecking.h"
#include "highInterestChecking.h"

using namespace std;

int main()
{
	string name;
	int number;
	double balance;
	char answer;

	bankAccounts *acc;

	//allows user to choose which type of account to set up and to enter information multiple times to set up multiple accounts
	do {
		cout << "Please choose the correct account type.";
		cout << "\n\t\tA - Certificate of deposit.";
		cout << "\n\t\tB - Savings Account.";
		cout << "\n\t\tC - High interest checking.";
		cout << "\n\t\tD - Service Charge Checking.";
		cout << "\n\t\tE - No Service Charge Checking.\n\n";
		
		cin >> answer;
		answer = (toupper(answer));

		cin.clear();
		cin.ignore();
		cout << "\nPlease enter account holder's name: ";
		getline(cin, name);
		cout << "\nPlease enter customer's account number: ";
		cin >> number;
		cout << "\nPlease enter starting account balance: $";
		cin >> balance;

		//validate user choice and processes appropriate account
		switch (answer) {
		case 'A':
			acc = new certificateOfDeposit(name, number, balance);
			acc->createMonthlyStatement();
			break;
		case 'B':
			acc = new savingsAccount(name, number, balance);
			acc->createMonthlyStatement();
			break;
		case 'C':
			acc = new highInterestChecking(name, number, balance);
			acc->createMonthlyStatement();
			break;
		case 'D':
			acc = new serviceChargeChecking(name, number, balance);
			acc->createMonthlyStatement();
			break;
		case 'E':
			acc = new noServiceChargeChecking(name, number, balance);
			acc->createMonthlyStatement();
			break;
		default: 
			cout << "I'm sorry, that was not a valid selection.";
			break;
		}
		
		cout << "\n\n\nWould you like to process another account? Enter 'Y' for yes or 'N' for no: ";
		cin >> answer;
		answer = (toupper(answer));
	} while (answer != 'N');

	system("pause");
	return 0;
}

