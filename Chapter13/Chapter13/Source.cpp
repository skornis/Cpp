#include <iostream>
#include <string>
#include "fractionMath.h"

using namespace std;

int main()
{
string fractionOne;
string fractionTwo;

cout << "\nWith this program, you may choose to add, subtract, multiply or divide two fractions.";

fractionMath newMath;

newMath.doFractionMath();

cout << "\n\n";
system("pause");
return 0;
}
