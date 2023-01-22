//William Green
//10-06-22
//CPS 271
//Machine Problem 3

#include <iostream>
#include "Fraction.h"

using namespace std;
using std::cout;

//Empty constructor which initializes the Fraction
template <class T, class U>
Fraction<T,U>::Fraction()
{
	numerator = 0;
	denominator = 1;
}

//A one-parameter constructor for just a numerator. This would make the Fraction represent a whole number.
template <class T, class U>
Fraction<T,U>::Fraction(T numer)
{
	numerator = numer;
	denominator = 1;
}

template <class T, class U>
Fraction<T,U>::Fraction(double number)
{
	numerator = number * 10000;
	denominator = 10000;
}

//A two-parameter constructor with both numerator (int) and denominator (int). This would make a Fraction with both a numerator and denominator
template <class T, class U>
Fraction<T,U>::Fraction(T numer, U denom)
{
	numerator = numer;
	denominator = denom;
}

//Add function taking a Fraction as a parameter and returning a Fraction
template <class T, class U>
Fraction<T,U> Fraction<T,U>::Add(Fraction<T,U>& frac)
{
	T new_numerator = numerator * frac.denominator + frac.numerator * denominator;
	U new_denominaator = denominator * frac.denominator;

	Fraction resultFrac(new_numerator, new_denominaator);

	resultFrac.Reduce();

	return resultFrac;
}

template <class T, class U>
//Subtract function taking a Fraction as a parameter and returning a Fraction
Fraction<T,U> Fraction<T,U>::Subtract(Fraction<T,U>& frac)
{
	T new_numerator = numerator * frac.denominator - frac.numerator * denominator;
	U new_denominaator = denominator * frac.denominator;

	Fraction resultFrac(new_numerator, new_denominaator);

	resultFrac.Reduce();

	return resultFrac;
}

template <class T, class U>
//Multiply function taking a Fraction as a parameter and returning a Fraction
Fraction<T,U> Fraction<T,U>::Multiply(Fraction<T,U>& frac)
{
	T new_numerator = numerator * frac.numerator;
	U new_denominaator = denominator * frac.denominator;

	Fraction resultFrac(new_numerator, new_denominaator);

	resultFrac.Reduce();

	return resultFrac;
}

template <class T, class U>
//Divide function taking a Fraction as a parameter and returning a Fraction
Fraction<T,U> Fraction<T,U>::Divide(Fraction<T,U>& frac)
{
	if (frac.denominator == 0)
	{
		cout << "\ninvalid denominator";
		cout << "\ndenominator will be set to 1";

		Fraction newFraction(frac.numerator, 1);

		T new_numerator = numerator * newFraction.denominator;
		U new_denominaator = denominator * newFraction.numerator;

		Fraction resultFrac(new_numerator, new_denominaator);

		resultFrac.Reduce();

		return resultFrac;
	}
	else
	{
		int new_numerator = numerator * frac.denominator;
		int new_denominaator = denominator * frac.numerator;

		Fraction resultFrac(new_numerator, new_denominaator);

		resultFrac.Reduce();

		return resultFrac;
	}

}

template <class T, class U>
//Input function to allow the user to enter the numerator and denominator.
void Fraction<T,U>::Input()
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

template <class T, class U>
//Print function which will print out the Fraction in the form numerator/denominator … i.e. 2/3
void Fraction<T,U>::Print()
{
	cout << "\nThe result is " << (int)numerator << "/" << (int)denominator << "\n" << endl;
}