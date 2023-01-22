//Machine Problem 5
//William Green
//CPS 271
//11-03-2022

#pragma once
#include<string>
#include "MyDate.h"
using namespace std;
class Person {
public:
	//Default empty constructor
	Person();

	//Constructor with parameters
	Person(string name, MyDate birthDate, string phoneNumber, string emailAddress);

	void setName(string name);
	void setBirthDate(MyDate date);
	void setPhoneNumber(string phoneNumber);
	void setEmailAddress(string emailAddress);

	string getPhoneNumber();

	void inputData();

	void printData();
private:
	string name;
	MyDate birthDate;
	string phoneNumber;
	string emailAddress;
};