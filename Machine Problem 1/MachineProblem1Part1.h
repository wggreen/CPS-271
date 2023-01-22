//William Green
//09/08/2022
//CPS 271
//Machine Problem 1 - Part 1

using namespace std;

//This function takes in two numbers, n and p, and multiplies n by itself p times
double power(double& n, int& p) {
	int result = 1;

	if (p < 0) {
		p = 2;
	}

	for (int i = 0; i < p; i++) {
		result *= n;
	}

	cout << n << "^" << p << " = " << result << "\n\n";

	return result;
}

//This function takes in three ints - hours, minutes, and seconds - and converts them into total seconds
long hms_to_secs(int hours, int minutes, int seconds) {
	long totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
	return totalSeconds;
}

//This function swaps the value of two ints
void swap(int& one, int& two)
{
	cout << "\n\n" << "The first number is " << one << "\n\n";
	cout << "The second number is " << two;

	int three = one;
	one = two;
	two = three;

	cout << "\n\n" << "After swapping, the first number is " << one << "\n\n";
	cout << "After swapping, the second number is " << two << "\n\n";
};