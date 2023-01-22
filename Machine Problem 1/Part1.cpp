//William Green
//09/08/2022
//CPS 271
//Machine Problem 1 - Part 1


#include <iostream> 
#include <MachineProblem1Part1.h>

using namespace std;

class partOne
{
	public 
};

void partOne() {
	double n;
	int p;

	cout << "Enter a number: ";
	cin >> n;
	cout << "Enter a second number: ";
	cin >> p;

	int result = power(n, p);

	char colon;
	char proceed = 'y';
	long totalSeconds;

	int hours;
	int minutes;
	int seconds;

	while (proceed != 'n')
	{
		cout << "\n\n" << "Enter time in the format HH:MM:SS: ";
		cin >> hours >> colon >> minutes >> colon >> seconds;
		totalSeconds = hms_to_secs(hours, minutes, seconds);
		cout << "The total number of seconds is " << totalSeconds << endl;
		cout << "Do it again? (y/n):";
		cin >> proceed;
	}

	int one = 1;
	int two = 2;

	cout << "\n\n" << "The first number is " << one << "\n\n";
	cout << "The second number is " << two;

	swap(one, two);

	cout << "\n\n" << "After swapping, the first number is " << one << "\n\n";
	cout << "After swapping, the second number is " << two << "\n\n";

	return 0;
}