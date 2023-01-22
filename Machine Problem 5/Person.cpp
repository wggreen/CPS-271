//Machine Problem 5
//William Green
//CPS 271
//11-03-2022

#include<iostream>
#include "Person.h"
using namespace std;

//Default Constructor
Person::Person() {
	setName("John Doe");
	birthDate.setMonth(1);
	birthDate.setDay(1);
	birthDate.setYear(2000);
	setPhoneNumber("7348675309");
	setEmailAddress("abc@me.com");
}

//Constructor with parameters
Person::Person(string personName, MyDate personBirthDate, string personPhoneNumber, string personEmailAddress) {
	setName(personName);
	setBirthDate(personBirthDate);
	setPhoneNumber(personPhoneNumber);
	setEmailAddress(personEmailAddress);
}

void Person::setName(string personName) {
	name = personName;
}

void Person::setBirthDate(MyDate personBirthDate) {
	birthDate = personBirthDate;
}

void Person::setPhoneNumber(string personPhoneNumber) {
	phoneNumber = personPhoneNumber;
}

void Person::setEmailAddress(string personEmailAddress) {
	emailAddress = personEmailAddress;
}

string Person::getPhoneNumber()
{
	return phoneNumber;
}

void Person::inputData() {
	cout << "\nEnter the person's name: " << endl;
	cin.ignore();
	std::getline(cin, name);
	cout << "Enter the person's birth date" << endl;
	birthDate.inputData();
	cout << "Enter the person's phone number: " << endl;
	cin >> phoneNumber;
	cout << "Enter the person's email address: " << endl;
	cin >> emailAddress;
}

void Person::printData() {
	cout << "Name: " << name << endl;
	cout << "Date of birth: " << birthDate.convertToCalendarDate() << endl;
	cout << "Phone number: " << phoneNumber << endl;
	cout << "Email address: " << emailAddress << endl;
}