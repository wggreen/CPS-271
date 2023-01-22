//William Green
//09-21-22
//CPS 271
//Machine Problem 2

#include <iostream>

using namespace std;
using std::cout;

class Fraction {
	int numerator;
	int denominator;

public:

	//Empty constructor which initializes the Fraction zero
	Fraction();

	//A one-parameter constructor for just a numerator (int). This would make the Fraction represent a whole number.
	Fraction(int);

	//A one-parameter constructor with a double.
	Fraction(double);

	//A two-parameter constructor with both numerator (int) and denominator (int)
	Fraction(int, int);

	//Add function taking a Fraction as a parameter and returning a Fraction
	Fraction Add(Fraction);

	//Subtract function taking a Fraction as a parameter and returning a Fraction
	Fraction Subtract(Fraction);

	//Multiply function taking a Fraction as a parameter and returning a Fraction
	Fraction Multiply(Fraction);

	//Divide function taking a Fraction as a parameter and returning a Fraction
	Fraction Divide(Fraction);

	//Add function taking two Fractions as parameters and updating the current object
	void Add(Fraction, Fraction);

	//Subtract function taking two Fractions as parameters and updating the current object
	void Subtract(Fraction, Fraction);

	//Multiply function taking two Fractions as parameters and updating the current object
	void Multiply(Fraction, Fraction);

	//Divide function taking two Fractions as parameters and updating the current object
	void Divide(Fraction, Fraction);

	//Input function to allow the user to enter the numerator and denominator
	void Input();

	//Print function which will print out the Fraction in the form numerator/denominator … i.e. 2/3
	void Print();
};

//Empty constructor which initializes the Fraction zero
Fraction::Fraction()
{
	numerator = 0;
	denominator = 0;
}

//A one-parameter constructor for just a numerator (int). This would make the Fraction represent a whole number.
Fraction::Fraction(int num)
{
	numerator = num;
	denominator = 1;
}

//A one-parameter constructor with a double. This would make a Fraction by multiplying the double by 100000,
//then creating a numerator and denominator as the result. For example; PI, 3.14159, would be saved in a Fraction object as 314159/100000
Fraction::Fraction(double number)
{
	numerator = number * 10000;
	denominator = 10000;
}

//A two-parameter constructor with both numerator (int) and denominator (int). This would make a Fraction with both a numerator and denominator
Fraction::Fraction(int n, int d)
{
	numerator = n;
	denominator = d;
}

//Add function taking a Fraction as a parameter and returning a Fraction
Fraction Fraction::Add(Fraction frac)
{
	int new_numerator = numerator * frac.denominator + frac.numerator * denominator;
	int new_denominaator = denominator * frac.denominator;

	Fraction resultFrac(new_numerator, new_denominaator);

	return resultFrac;
}

//Subtract function taking a Fraction as a parameter and returning a Fraction
Fraction Fraction::Subtract(Fraction frac)
{
	int new_numerator = numerator * frac.denominator - frac.numerator * denominator;
	int new_denominaator = denominator * frac.denominator;

	Fraction resultFrac(new_numerator, new_denominaator);

	return resultFrac;
}

//Multiply function taking a Fraction as a parameter and returning a Fraction
Fraction Fraction::Multiply(Fraction frac)
{
	int new_numerator = numerator * frac.numerator;
	int new_denominaator = denominator * frac.denominator;

	Fraction resultFrac(new_numerator, new_denominaator);

	return resultFrac;
}

//Divide function taking a Fraction as a parameter and returning a Fraction
Fraction Fraction::Divide(Fraction frac)
{
	if (frac.denominator == 0)
	{
		cout << "\ninvalid denominator";
		cout << "\ndenominator will be set to 1";

		Fraction newFraction(frac.numerator, 1);

		int new_numerator = numerator * newFraction.denominator;
		int new_denominaator = denominator * newFraction.numerator;

		Fraction resultFrac(new_numerator, new_denominaator);

		return resultFrac;
	}
	else
	{
		int new_numerator = numerator * frac.denominator;
		int new_denominaator = denominator * frac.numerator;

		Fraction resultFrac(new_numerator, new_denominaator);

		return resultFrac;
	}

}

//Add function taking two Fractions as parameters and updating the current object
void Fraction::Add(Fraction frac1, Fraction frac2)
{
	int new_numerator = frac2.numerator * frac1.denominator + frac1.numerator * frac2.denominator;
	int new_denominaator = frac2.denominator * frac1.denominator;

	numerator = new_numerator;
	denominator = new_denominaator;
}

//Subtract function taking two Fractions as parameters and updating the current object
void Fraction::Subtract(Fraction frac1, Fraction frac2)
{
	int new_numerator = frac1.numerator * frac2.denominator - frac2.numerator * frac1.denominator;
	int new_denominaator = frac1.denominator * frac2.denominator;

	numerator = new_numerator;
	denominator = new_denominaator;
}

//Multiply function taking two Fractions as parameters and updating the current object
void Fraction::Multiply(Fraction frac1, Fraction frac2)
{
	int new_numerator = frac1.numerator * frac2.numerator;
	int new_denominaator = frac1.denominator * frac2.denominator;

	numerator = new_numerator;
	denominator = new_denominaator;
}

//Divide function taking two Fractions as parameters and updating the current object
void Fraction::Divide(Fraction frac1, Fraction frac2)
{
	if (frac1.denominator == 0 || frac2.denominator == 0)
	{
		cout << "\ninvalid denominator";
		cout << "\ndenominator will be set to 1";

		Fraction newFraction(frac1.numerator, 1);
		Fraction newFraction2(frac2.numerator, 1);

		int new_numerator = newFraction.numerator * newFraction2.denominator;
		int new_denominaator = newFraction.denominator * newFraction2.numerator;

		numerator = new_numerator;
		denominator = new_denominaator;
	}
	else
	{
		int new_numerator = frac1.numerator * frac2.denominator;
		int new_denominaator = frac1.denominator * frac2.numerator;

		numerator = new_numerator;
		denominator = new_denominaator;
	}

}

//Input function to allow the user to enter the numerator and denominator.
void Fraction::Input()
{
	cout << "\nPlease enter a numerator for a fraction: ";
	cin >> numerator;

	cout << "Please enter a denominator for a fraction (that isn't 0): ";
	cin >> denominator;

	if (denominator == 0)
	{
		cout << "You've entered an invalid denominator of 0\n";
	}
}

//Print function which will print out the Fraction in the form numerator/denominator … i.e. 2/3
void Fraction::Print()
{
	cout << "\nThe result is " <<	 numerator << "/" << denominator << "\n" << endl;
}