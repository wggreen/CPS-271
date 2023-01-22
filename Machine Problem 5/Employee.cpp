//Machine Problem 5
//William Green
//CPS 271
//11-03-2022

#include<iostream>
#include "Employee.h"
using namespace std;

//Default Constructor
Employee::Employee():Person() {
	setSalary(12345);
	dateHired.setMonth(1);
	dateHired.setDay(1);
	dateHired.setYear(2022);
}

//Constructor with parameters
Employee::Employee(string name, MyDate birthDate, string phoneNumber, string emailAddress, long employeeSalary, MyDate employeeDateHired)
	:Person(name, birthDate, phoneNumber, emailAddress) {
	salary = employeeSalary;
	dateHired = employeeDateHired;
}

void Employee::setSalary(long employeeSalary) {
	salary = employeeSalary;
}
void Employee::setHiredDate(MyDate employeeDateHired) {
	dateHired = employeeDateHired;
}

void Employee::inputData() {
	Person::inputData();
	cout << "Enter salary: \n";
	cin >> salary;
	cout << "Enter employee date hired\n";
	dateHired.inputData();
}
void Employee::printData() {
	Person::printData();
	cout << endl;
	cout << "Salary: " << salary << endl;
	cout << "Hired date: " << dateHired.convertToCalendarDate() << endl;
}