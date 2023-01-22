//William Green
//12-08-22
//CPS 271
//Machine Problem 7

#include <iostream> 
#include "Fraction.h"
#include "Fraction.cpp"

using namespace std;

void Menu();

int main()
{
	char choice;

	Fraction<char, char> frac1;
	Fraction <char, char> frac2;
	Fraction<char, char> frac3;

	do
	{
		Menu();
		cin >> choice;

		switch (choice)
		{
		case '1':

			frac1.Input();

			frac2.Input();

			frac3 = frac1.Add(frac2);

			frac3.Print();

			break;

		case '2':

			frac1.Input();

			frac2.Input();

			frac3 = frac1.Subtract(frac2);

			frac3.Print();

			break;

		case '3':

			frac1.Input();

			frac2.Input();

			frac3 = frac1.Multiply(frac2);

			frac3.Print();

			break;

		case '4':

			frac1.Input();

			frac2.Input();

			frac3 = frac1.Divide(frac2);

			frac3.Print();

			break;

		case 'Q':

		case 'q':

			cout << "\nGoodbye\n";

			break;

		default:

			cout << "\nInvalid choice\n" << endl;
		}
	} while (choice != 'Q' && choice != 'q');
	return 0;
}

void Menu()
{
	cout << "You can perform the following operations on fractions:\n";

	cout << "1. Add" << endl;

	cout << "2. Subtract" << endl;

	cout << "3. Multiply" << endl;

	cout << "4. Divide" << endl;

	cout << "q/Q. Quit\n" << endl;

	cout << "Please enter your choice (1-4/q/Q): ";
}