//Machine Problem 5
//William Green
//CPS 271
//11-03-2022

#pragma once
#include<string>
using namespace std;
class MyDate {
public:
	//Default constructor
	MyDate();

	//Constructor with parameters
	MyDate(int month, int day, int year);

	void setDay(int day);

	void setMonth(int month);

	void setYear(int year);

	//Method to convert int date data to a M/D/Y string
	string convertToCalendarDate();

	void inputData();

private:
	int month;

	int day;

	int year;
};