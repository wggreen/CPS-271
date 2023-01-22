//William Green
//10-20-22
//CPS 271
//Machine Problem 4

#include "pointType.h"
#include "circleType.h"
#include "cylinderType.h"
#include <iostream>
#include <string>

using namespace std;
using std::cout;

void inputData(char choice);
void printData(char choice);

pointType point;
circleType circle;
cylinderType cylinder;

int main()
{
	char choice;
	char choice2;

	do
	{
		cout << "Which of the following x-y coordinate plane features would you like to work with?:\n";

		cout << "1. Point" << endl;

		cout << "2. Circle" << endl;

		cout << "3. Cylinder" << endl;

		cout << "q/Q. Quit\n" << endl;

		cout << "Please enter your choice (1-3/q/Q): ";

		cin >> choice;

		switch (choice)
		{
		case '1':

			do
			{
				cout << "what operation would you like to perform?:\n";

				cout << "1. Input data" << endl;

				cout << "2. Print data" << endl;

				cout << "3. Back" << endl;

				cout << "Please enter your choice (1-3): ";

				cin >> choice2;

				switch (choice2)
				{
				case '1':

					inputData(choice);

					break;

				case '2':

					printData(choice);

					break;

				case '3':

					break;
				}

			} while (choice2 != '3');

			break;

		case '2':

			do
			{
				cout << "what operation would you like to perform?:\n";

				cout << "1. Input data" << endl;

				cout << "2. Print data" << endl;

				cout << "3. Back" << endl;

				cout << "Please enter your choice (1-3): ";

				cin >> choice2;

				switch (choice2)
				{
				case '1':

					inputData(choice);
					
					break;

				case '2':

					printData(choice);

				case '3':

					break;
				}

			} while (choice2 != '3');

			break;

		case '3':

			do
			{
				cout << "what operation would you like to perform?:\n";

				cout << "1. Input data" << endl;

				cout << "2. Print data" << endl;

				cout << "3. Back" << endl;

				cout << "Please enter your choice (1-3): ";

				cin >> choice2;

				switch (choice2)
				{
				case '1':

					inputData(choice);

				case '2':

					printData(choice);

				case '3':

					break;
				}

			} while (choice2 != '3');

			break;

		case 'Q':

		case 'q':

			cout << "\nGoodbye\n";

			exit(0);

		default:

			cout << "\nInvalid choice\n" << endl;
		}
	} while (1);

	return 0;
}

void inputData(char choice)
{
	char x;
	char y;
	string radiusInput;
	float radius;
	int height;

	switch (choice)
	{
		case '1':
			cout << "Please enter the x coordinate for the point: ";
			cin >> x;

			point.setX(x);

			cout << "\nPlease enter the y coordinate for the point: ";
			cin >> y;

			point.setY(x);

		case '2':
			cout << "Please enter an x coordinate for the center: ";
			cin >> x;

			cout << "\nPlease enter a y coordinate for the center: ";
			cin >> y;

			circle.setCenter(x, y);

			cout << "\nPlease enter a value for the radius: ";
			cin >> radiusInput;
			radius = std::stof(radiusInput);
			circle.setRadius(radius);

		case '3':
			cout << "Please enter an x coordinate for the center: ";
			cin >> x;

			cout << "\nPlease enter a y coordinate for the center: ";
			cin >> y;

			cylinder.setBaseCenter(x, y);

			cout << "\nPlease enter a value for the radius: ";
			cin >> radiusInput;
			radius = std::stof(radiusInput);
			cylinder.setBaseRadius(radius);

			cout << "Please enter a value for the height: ";
			cin >> height;
			cylinder.setHeight(height);

	}
}

void printData(char choice)
{

	switch (choice)
	{
	case '1':
		point.print();

	case '2':
		circle.center.print();
		circle.printRadius();
		circle.printArea();
		circle.printCircumference();

	case '3':
		cylinder.base.center.print();
		cylinder.base.printRadius();
		cylinder.base.printArea();
		cylinder.base.printCircumference();
		cylinder.printSurfaceArea();
		cylinder.printVolume();
	}
}