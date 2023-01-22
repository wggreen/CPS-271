//Machine Problem 5
//William Green
//CPS 271
//11-03-2022

#pragma once
#include "Person.h"
class Employee :public Person {
public:
	//Default empty constructor
	Employee();
	//Default constructor with parameters
	Employee(string name, MyDate birthDate, string phoneNumber, string emailAddress, long salary, MyDate dateHired);

	void setSalary(long salary);
	void setHiredDate(MyDate hired_date);

	void inputData();
	void printData();

private:
	long salary;
	MyDate dateHired;
};