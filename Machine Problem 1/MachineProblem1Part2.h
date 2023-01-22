//William Green
//09/08/2022
//CPS 271
//Machine Problem 1 - Part 2

#include <iostream>
#include <fstream>
#include <string> 

using namespace std;

struct Student
{
	string firstName;
	string lastName;
	int score;
	char grade;
};

Student students[20];

Student bestStudents[30];

ifstream file;

int numberOfStudents = 10;

void readFile()
{
	int i;

	file.open("students.txt", ifstream::in);

	while (file.eof())
	{
		for (i = 0; i < numberOfStudents; i++)
		{
			file >> students[i].firstName >> students[i].lastName >> students[i].score;
		}
	}

	file.close();
}

void grade()
{
	int i;

	for (i = 0; i < numberOfStudents; i++)
	{
		switch (students[i].score / 10)
		{
		case 10:
		case 9:
			students[i].grade = 'A';
			break;
		case 8:
			students[i].grade = 'B';
			break;
		case 7:
			students[i].grade = 'C';
			break;
		case 6:
			students[i].grade = 'D';
			break;
		case 5:
			students[i].grade = 'E';
			break;
		default:
			students[i].grade = 'F';
		}
	}

}

void findHighestScore()
{
	int i;
	int j = 0;
	int highestGrade = 0;

	for (i = 0; i < numberOfStudents; i++)
	{
		if (students[i].score >= highestGrade)
		{
			highestGrade = students[i].score;
			bestStudents[j].firstName = students[i].firstName;
			bestStudents[j].lastName = students[i].lastName;
			bestStudents[j].score = students[i].score;
			bestStudents[j].grade = students[i].grade;
			j++;
		}
	}
}

void printBestStudents()
{
	int i = 0;
	int numberOfBestStudents = sizeof(bestStudents) / sizeof(bestStudents[0]);
	if (numberOfBestStudents == 1)
	{
		cout << "\n\n" << "The student with the highest score is";
	}
	else
	{
		cout << "\n\n" << "The students with the highest scores ares";
	}
	for (i = 0; i < numberOfBestStudents; i++)
	{
		cout << "\n\n" << bestStudents[i].firstName << " " << bestStudents[i].lastName << " " << bestStudents[i].score;
	}
}