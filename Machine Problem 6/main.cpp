//Machine Problem 6
//William Green
//CPS 271
//11-17-2022

#include <iostream> 
#include "myArray.h"

void Menu();

int main() {
	bool quit = false;
	char choice;

	int length;
	int beginning;
	int end;

	while (!quit) {
		Menu();
		cin >> choice;

		switch (choice) {
			case '1':
			{
				cout << "\nPlease enter the length of the array: ";
				cin >> length;
				myArray myArray(length);
				for (int i = 0; i < length ;i++) {
					//Print out the selected elements of the array (and test if the overloaded index operator works)
					cout << myArray[i] << endl;
				}
				cout << "\n" << endl;
			}
				
				break;
			case '2':
			{
				cout << "Please enter the beginning index of the array: ";
				cin >> beginning;
				cout << "Please enter the ending index of the array: ";
				cin >> end;
				myArray myArray(beginning, end);
				for (int i = beginning; i < end;i++) {
					//Print out the selected elements of the array (and test if the overloaded index operator works)
					cout << myArray[i] << endl;
				}
				cout << "\n" << endl;

			}

				break;
			case '3':
				quit = true;

				break;
			default:
				std::cout << "Bad Input, Try again " << std::endl;
				break;
		}
	}

	return 0;
}

void Menu() {
	cout << "What would you like to do with the array?\n";
	cout << "1. Choose length\n";
	cout << "2. Choose beginning and end\n";;
	cout << "3. Quit\n\n";

}