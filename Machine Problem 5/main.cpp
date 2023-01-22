//Machine Problem 5
//William Green
//CPS 271
//11-03-2022

#include <iostream>
#include "Faculty.h"
#include "Staff.h"
#include "Student.h"
#include <vector>

int main() {
	//Dynamic vector of pointers
	std::vector<Person*> persons;

	char choice;

	//Looping menu
	do
	{
		cout << "Please select an option: 1-4/q-Q" << endl;
		cout << "1. Student" << endl;
		cout << "2. Faculty" << endl;
		cout << "3. Staff" << endl;
		cout << "4. Show list" << endl << "\n";
		cin >> choice;
		switch (choice)
		{
		case '1':
		{
			//Add student to vector
			Student student = Student();
			student.inputData();
			persons.push_back(&student);
		}

			break;
		case '2':
		{
			//Add faculty to vector
			Faculty faculty = Faculty();
			faculty.inputData();
			persons.push_back(&faculty);
		}

			break;
		case '3':
		{
			//Add staff to vector
			Staff staff = Staff();
			staff.inputData();
			persons.push_back(&staff);
		}

			break;
		case '4':
			//Loop through vector of persons and print their data
			for (int i = 0; i < persons.size(); i++) {
				persons[i]->printData();
			}

			cout << "\n";

			break;

		case 'Q':

		case 'q':

			cout << "\nGoodbye\n";

			exit(0);

		default:

			cout << "\nInvalid choice\n" << endl;
		}
	} while (1);
}
