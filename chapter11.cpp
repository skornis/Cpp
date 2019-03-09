/*Program to take user input for radius and height and calculate the total cost to ship a fluid filled container.*/
/*Also allows for calculation of the total cost to paint the container*/
/*Staci Kornis*/
/*Chapter 11*/
/*Spring 2019*/

#include <iostream>
#include "shippingCharges.h"
#include "cylinderType.h"
#include "paintCharges.h"
#include <iomanip>

using namespace std;

void validateSelection(char c);//validates which choice user has made

int main() {
	double radius, height, cost, charge, paintCost, paintCharge;
	char choice;

	cout << "This program will allow you to calculate shipping charges per container and also the cost to paint the container.\n\nWould you like to continue? Enter \'Y\' for yes or \'N\' for no: ";
	cin >> choice;

	validateSelection(choice);

	cout << "\n\nPlease enter the dimensions of your container in feet.\n\nPlease enter the radius of the base of your container (in feet): ";
	cin >> radius;

	cout << "\n\nPlease enter the height of your container (in feet): ";
	cin >> height;

	cout << "\n\nPlease enter the cost shipping cost per liter: $";
	cin >> cost;

	shippingCharges customerBill(cost, radius, height);

	charge = customerBill.getShippingCharges();

	cout << fixed << setprecision(2) << "\n\nThe total cost for shipping your container is: $" << charge;
	cout << "\n\nWould you like to have your container painted? Enter \'Y\' for yes or \'N\' for no: ";
	cin >> choice;

	validateSelection(choice);

	cout << "\n\nPlease enter the cost per square foot to paint the container: $";
	cin >> paintCost;

	paintCharges paintBill(paintCost, radius, height);
	paintCharge = paintBill.getPaintCharges();

	cout << fixed << setprecision(2) << "\n\nThe total cost for paintaing your container is: $" << paintCharge;
	cout << "\n\nThank you for your business!\n";

	system("pause");
	return 0;
}

void validateSelection(char c) {
	switch (toupper(c)) {
	case 'Y': {
		cout << "\n\nThank you, we will now process your request.";
		break; }
	case 'N': {
		cout << "\n\nThank you for your business.";
		system("pause");
		exit(0); }
	default:
		break;
	}
}