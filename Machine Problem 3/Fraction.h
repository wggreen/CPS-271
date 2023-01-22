#pragma once
//William Green
//10-06-22
//CPS 271
//Machine Problem 3

#include <iostream>

using namespace std;
using std::cout;

class Fraction {
	int numerator;
	int denominator;

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

	Fraction();

	Fraction(int);

	Fraction(double);

	//A two-parameter constructor with both numerator (int) and denominator (int)
	Fraction(int, int);

	Fraction Add(Fraction);

	Fraction Subtract(Fraction);

	Fraction Multiply(Fraction);

	Fraction Divide(Fraction);

	void Add(Fraction, Fraction);

	void Subtract(Fraction, Fraction);

	void Multiply(Fraction, Fraction);

	void Divide(Fraction, Fraction);

	//Input function to allow the user to enter the numerator and denominator
	void Input();

	//Print function which will print out the Fraction in the form numerator/denominator … i.e. 2/3
	void Print();

	Fraction operator+(Fraction);

	Fraction operator-(Fraction);

	Fraction operator/(Fraction);

	Fraction operator*(Fraction);

	Fraction operator=(Fraction);

	Fraction operator+=(const Fraction&);

	Fraction operator-=(const Fraction&);

	Fraction operator*=(const Fraction&);

	Fraction operator/=(const Fraction&);

	Fraction operator-();

	Fraction operator~();

	Fraction operator++();

	Fraction operator++(int);

	Fraction operator--();

	Fraction operator--(int);

	friend ostream& operator<<(ostream& out, const Fraction&);

	friend istream& operator>>(istream& in, const Fraction&);

	bool operator<(const Fraction&);

	bool operator>(const Fraction&);

	bool operator<=(const Fraction&);

	bool operator>=(const Fraction&);

	bool operator==(const Fraction&);

	bool operator!=(const Fraction&);

	bool operator!();

	operator double();

	operator float();


};