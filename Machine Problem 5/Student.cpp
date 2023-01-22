//Machine Problem 5
//William Green
//CPS 271
//11-03-2022

#include<iostream>
#include "Student.h"
using namespace std;

Student::Student():Person() {
	setGradeStatus(freshman);
	setGPA(4.0);
}
Student::Student(string name, MyDate birthDate, string phoneNumber, string emailAddress, grade_status status, double GPA)
	:Person(name, birthDate, phoneNumber, emailAddress) {
	setGradeStatus(status);
	setGPA(GPA);
}
void Student::setGradeStatus(grade_status studentGradeStatus) {
	grade = studentGradeStatus;
}
void Student::setGPA(double studentGPA) {
	GPA = studentGPA;
}
void Student::inputData() {
	cout << "\nPlease enter the student's data" << endl;
	Person::inputData();
	int status;
	cout << "Enter status (0-freshman, 1-sophomore, 2-junior, 3-senior): " << endl;;
	cin >> status;
	if (status == 0)
		grade = freshman;
	else if (status == 1)
		grade = sophomore;
	else if (status == 2)
		grade = junior;
	else if (status == 3)
		grade = senior;

	cout << "Enter GPA: \n";
	cin >> GPA;
	cout << "\n";
	cin.ignore();
}
void Student::printData() {
	Person::printData();
	cout << endl;
	cout << "Grade status: " << grade << endl;
	cout << "GPA: " << GPA << endl;
}