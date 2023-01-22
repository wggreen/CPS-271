//Machine Problem 5
//William Green
//CPS 271
//11-03-2022

#include<iostream>
#include "MyDate.h"

using namespace std;

//Default constructor
MyDate::MyDate() {
	month = 1;
	day = 1;
	year = 2000;
}
MyDate::MyDate(int dateMonth, int dateDay, int dateYear) {
	month = dateMonth;
	day = dateDay;
	year = dateYear;
}

void MyDate::setMonth(int dateMonth) {
	month = dateMonth;
}

void MyDate::setDay(int dateDay) {
	day = dateDay;
}

void MyDate::setYear(int dateYear) {
	year = dateYear;
}

string MyDate::convertToCalendarDate() {
	string date = to_string(month) + "/" + to_string(day) + "/" + to_string(year);
	return date;
}

void MyDate::inputData() {
	cout << "Enter the month: \n";
	cin >> month;

	cout << "Enter the day: \n";
	cin >> day;

	cout << "Enter the year: \n";
	cin >> year;
}