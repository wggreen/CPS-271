//Machine Problem 5
//William Green
//CPS 271
//11-03-2022

#pragma once
#include "Employee.h"

class Staff :public Employee {
public:
	//Default constructor
	Staff();
	//Constructor with parameters
	Staff(string name, MyDate birthDate, string phoneNumber, string emailAddress, long salary, MyDate dateHired, string title);

	void setTitle(string title);

	void inputData();
	void printData();
private:
	string title;
};