//Machine Problem 5
//William Green
//CPS 271
//11-03-2022

#include<iostream>
#include "Staff.h"
using namespace std;

Staff::Staff(): Employee() {
	setTitle("Principal");
}

Staff::Staff(string name, MyDate birthDate, string phoneNumber, string emailAddress, long salary, MyDate dateHired, string jobTitle)
	:Employee(name, birthDate, phoneNumber, emailAddress, salary, dateHired) {
	title = jobTitle;
}

void Staff::setTitle(string jobTitle) {
	title = jobTitle;
}

void Staff::inputData() {
	cout << "Please enter the staff member's data" << endl;
	Employee::inputData();
	cout << "Enter title: ";
	cin >> title;
}

void Staff::printData() {
	Employee::printData();
	cout << "Title: " << title << endl;
}