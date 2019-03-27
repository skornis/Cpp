#pragma once
#include <iostream>
#include <string>
#include "bankAccounts.h"

using namespace std;

class checkingAccounts {

};

/*checkingAccount: A checking account is a bank account. 
Therefore, it inherits all the properties of a bank account. 
Because one of the objectives of a checking account is to be able to write checks, 
include the pure virtual function writeCheck to write a check.

serviceChargeChecking: A service charge checking account is a checking account. 
Therefore, it inherits all the properties of a checking account. 
For simplicity, assume that this type of account does not pay any interest, 
  allows the account holder to write a limited number of checks each month, 
  and does not require any minimum balance. 
  Include appropriate named constants, instance variables, and functions in this class.

noServiceChargeChecking: A checking account with no monthly service charge is a checking account. 
Therefore, it inherits all the properties of a checking account. 
Furthermore, this type of account pays interest, allows the account holder to write checks, and requires a minimum balance.

highInterestChecking: A checking account with high interest is a checking account with no monthly service charge. 
Therefore, it inherits all the properties of a no service charge checking account. 
Furthermore, this type of account pays higher interest and requires a higher minimum balance than the no service charge checking account.*/