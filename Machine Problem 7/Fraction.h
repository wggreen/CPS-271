#pragma once

//William Green
//12-08-22
//CPS 271
//Machine Problem 7

#include <iostream>

using namespace std;
using std::cout;

template <class T, class U>
class Fraction {
	T numerator;
	U denominator;

private:

	void Reduce()
	{
		int reducer = 1;

		for (int i = 1; i <= numerator; i++) {
			if (numerator % i == 0 && denominator % i == 0) {
				reducer = i;
			}
		}

		numerator /= reducer;
		denominator /= reducer;
	}

public:

	//Default constructor
	Fraction();

	//Constructor with just numerator
	Fraction(T numer);

	//Constructor with double
	Fraction(double);

	//A two-parameter constructor with both numerator and denominator
	Fraction(T numer, U denom);

	Fraction Add(Fraction&);

	Fraction Subtract(Fraction&);

	Fraction Multiply(Fraction&);

	Fraction Divide(Fraction&);

	void Add(Fraction, Fraction);

	void Subtract(Fraction, Fraction);

	void Multiply(Fraction, Fraction);

	void Divide(Fraction, Fraction);

	//Input function to allow the user to enter the numerator and denominator
	void Input();

	//Print function which will print out the Fraction in the form numerator/denominator … i.e. 2/3
	void Print();
};