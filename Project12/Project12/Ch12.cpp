#include <iostream>
#include <string>


using namespace std;

void convertToUpper(string);
string getInput();

int main()
{
	convertToUpper(getInput());
		
	cout << "\n\n";
	system("pause");
	return 0;
}

string getInput()
{
	string input = "";
	cout << "Please enter the word or phrase you would like converted: ";
	getline(cin, input);
	return input;
}

void convertToUpper(string input)
{
	char *upper;
	int length = input.length();
	upper = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		upper[i] = toupper(input[i]);
		cout << upper[i];
	}	
}