//William Green
//10-06-22
//CPS 271
//Machine Problem 3

#include <iostream> 
#include "Fraction.h"

using namespace std;

void performOperation(Fraction fraction1, Fraction fraction2, Fraction& resultFrac, char choice);

void Menu();

int main()
{
	char choice;

	Fraction frac1;
	Fraction frac2;;
	Fraction result;

	do
	{
		Menu();
		cin >> choice;

		switch (choice)
		{
		case '1':

		case '2':

		case '3':

		case '4':

			frac1.Input();
			frac2.Input();

			performOperation(frac1, frac2, result, choice);

			result.Print();

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

void Menu()
{
	cout << "You can perform the following operations on fractions:\n";

	cout << "1. Add" << endl;

	cout << "2. Subtract" << endl;

	cout << "3. Multiply" << endl;

	cout << "4. Divide" << endl;

	cout << "5. Binary operations" << endl;

	cout << "6. Unary operations" << endl;

	cout << "7. Boolean operations" << endl;

	cout << "8. Casting operations" << endl;

	cout << "q/Q. Quit\n" << endl;

	cout << "Please enter your choice (1-4/q/Q): ";
}

void performOperation(Fraction fraction1, Fraction fraction2, Fraction& resultFrac, char choice)
{
	// Perform the

	// required operation.

	switch (choice)

	{

	case '1':

		resultFrac.Add(fraction1, fraction2);

		break;

	case '2':

		resultFrac.Subtract(fraction1, fraction2);

		break;

	case '3':

		resultFrac.Multiply(fraction1, fraction2);

		break;

	case '4':

		resultFrac.Divide(fraction1, fraction2);

		break;

	}
}