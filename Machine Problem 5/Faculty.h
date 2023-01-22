//Machine Problem 5
//William Green
//CPS 271
//11-03-2022

#pragma once
#include <list>
#include "Employee.h"

class Faculty :public Employee {
public:
	//Default empty constructor
	Faculty();

	//Constructor with parameters
	Faculty(string name, MyDate birthDate, string phoneNumber, string emailAddress, long salary, MyDate dateHired, int room, bool tenure, list<MyDate> officeHours);

	void setRoomNumber(int room);
	void setTenure(bool tenure);

	void AddOfficeHours(MyDate date);

	void inputData();
	void printData();

private:
	int roomNumber;
	bool tenure;
	list<MyDate> officeHours;
};