//Machine Problem 5
//William Green
//CPS 271
//11-03-2022

#include<iostream>
#include "Faculty.h"

using namespace std;

//Default Constructor
Faculty::Faculty() : Employee() {
	setRoomNumber(1);
	setTenure(true);
	MyDate officeHour = MyDate();
	AddOfficeHours(officeHour);
}

//Constructor with parameters
Faculty::Faculty(string name, MyDate birthDate, string phoneNumber, string emailAddress, long salary, MyDate dateHired, int roomNumber, bool tenure, list<MyDate> officeHours)
	:Employee(name, birthDate, phoneNumber, emailAddress, salary, dateHired) {
	setTenure(tenure);
	setRoomNumber(roomNumber);
	for (MyDate date : officeHours)
	{
		AddOfficeHours(date);
	}
}

void Faculty::setRoomNumber(int facultyRoomNumber) {
	roomNumber = facultyRoomNumber;
}
void Faculty::setTenure(bool facultyTenure) {
	tenure = facultyTenure;
}
void Faculty::AddOfficeHours(MyDate date) {
	officeHours.push_back(date);
}

void Faculty::inputData() {
	int num;
	cout << "Please enter the faculty memnber's data" << endl;
	Employee::inputData();
	cout << "Enter room number:\n";
	cin >> roomNumber;
	cout << "Enter tenure(1-true,0-false):\n";
	cin >> tenure;
	cout << "Enter number of office hour days:\n";
	cin >> num;
	for (int i = 0; i < num; i++) {
		MyDate date;
		date.inputData();
		AddOfficeHours(date);
	}

}
void Faculty::printData() {
	Employee::printData();
	cout << "Roon number: " << roomNumber << endl;
	cout << "Tenure: " << tenure << endl;
	cout << "Office hours: " << endl;
	for (auto it = officeHours.begin(); it != officeHours.end(); ++it) {
		cout << (*it).convertToCalendarDate() << endl;
	}
}
