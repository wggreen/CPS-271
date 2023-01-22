//Machine Problem 5
//William Green
//CPS 271
//11-03-2022

#pragma once
#include "Person.h"

//List of grades
enum grade_status { freshman, sophomore, junior, senior };

class Student :public Person {
public:
	//Default empty constructor
	Student();

	//Default constructor with parameters
	Student(string name, MyDate birthDate, string phoneNumber, string emailAddress, grade_status grade, double GPA);

	void setGradeStatus(grade_status status);
	void setGPA(double GPA);

	void inputData();
	void printData();
private:
	grade_status grade;
	double GPA;
};