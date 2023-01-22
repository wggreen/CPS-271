//William Green
//10-06-22
//CPS 271
//Machine Problem 3

#include <iostream>
#include "Fraction.h"

using namespace std;
using std::cout;

//Empty constructor which initializes the Fraction
Fraction::Fraction()
{
	numerator = 0;
	denominator = 1;
}

//A one-parameter constructor for just a numerator (int). This would make the Fraction represent a whole number.
Fraction::Fraction(int num)
{
	numerator = num;
	denominator = 1;
}

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

	resultFrac.Reduce();

	return resultFrac;
}

//Subtract function taking a Fraction as a parameter and returning a Fraction
Fraction Fraction::Subtract(Fraction frac)
{
	int new_numerator = numerator * frac.denominator - frac.numerator * denominator;
	int new_denominaator = denominator * frac.denominator;

	Fraction resultFrac(new_numerator, new_denominaator);

	resultFrac.Reduce();

	return resultFrac;
}

//Multiply function taking a Fraction as a parameter and returning a Fraction
Fraction Fraction::Multiply(Fraction frac)
{
	int new_numerator = numerator * frac.numerator;
	int new_denominaator = denominator * frac.denominator;

	Fraction resultFrac(new_numerator, new_denominaator);

	resultFrac.Reduce();

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

//Add function taking two Fractions as parameters and updating the current object
void Fraction::Add(Fraction frac1, Fraction frac2)
{
	int new_numerator = frac2.numerator * frac1.denominator + frac1.numerator * frac2.denominator;
	int new_denominaator = frac2.denominator * frac1.denominator;

	numerator = new_numerator;
	denominator = new_denominaator;

	this->Reduce();
}

//Subtract function taking two Fractions as parameters and updating the current object
void Fraction::Subtract(Fraction frac1, Fraction frac2)
{
	int new_numerator = frac1.numerator * frac2.denominator - frac2.numerator * frac1.denominator;
	int new_denominaator = frac1.denominator * frac2.denominator;

	numerator = new_numerator;
	denominator = new_denominaator;

	this->Reduce();
}

//Multiply function taking two Fractions as parameters and updating the current object
void Fraction::Multiply(Fraction frac1, Fraction frac2)
{
	int new_numerator = frac1.numerator * frac2.numerator;
	int new_denominaator = frac1.denominator * frac2.denominator;

	numerator = new_numerator;
	denominator = new_denominaator;

	this->Reduce();
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

		this->Reduce();
	}
	else
	{
		int new_numerator = frac1.numerator * frac2.denominator;
		int new_denominaator = frac1.denominator * frac2.numerator;

		numerator = new_numerator;
		denominator = new_denominaator;

		this->Reduce();
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
	cout << "\nThe result is " << numerator << "/" << denominator << "\n" << endl;
}

Fraction Fraction::operator+(Fraction frac)
{
	int new_numerator = numerator * frac.denominator + frac.numerator * denominator;
	int new_denominaator = denominator * frac.denominator;

	Fraction resultFrac(new_numerator, new_denominaator);

	resultFrac.Reduce();

	return resultFrac;
}

Fraction Fraction::operator-(Fraction frac)
{
	int new_numerator = numerator * frac.denominator - frac.numerator * denominator;
	int new_denominaator = denominator * frac.denominator;

	Fraction resultFrac(new_numerator, new_denominaator);

	resultFrac.Reduce();

	return resultFrac;
}

Fraction Fraction::operator/(Fraction frac)
{
	if (frac.denominator == 0)
	{
		cout << "\ninvalid denominator";
		cout << "\ndenominator will be set to 1";

		Fraction newFraction(frac.numerator, 1);

		int new_numerator = numerator * newFraction.denominator;
		int new_denominaator = denominator * newFraction.numerator;

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

Fraction Fraction::operator*(Fraction frac)
{
	int new_numerator = numerator * frac.numerator;
	int new_denominaator = denominator * frac.denominator;

	Fraction resultFrac(new_numerator, new_denominaator);

	resultFrac.Reduce();

	return resultFrac;
}

Fraction Fraction::operator=(Fraction frac)
{
	int new_numerator = numerator;
	int new_denominaator = denominator;

	Fraction resultFrac(new_numerator, new_denominaator);

	resultFrac.Reduce();

	return resultFrac;
	
}

Fraction Fraction::operator+=(const Fraction& frac)
{
	Add(frac);
	Reduce();
	return *this;
}

Fraction Fraction::operator-=(const Fraction& frac)
{
	Subtract(frac);
	Reduce();
	return *this;
}

Fraction Fraction::operator*=(const Fraction& frac)
{
	Multiply(frac);
	Reduce();
	return *this;
}

Fraction Fraction::operator/=(const Fraction& frac)
{
	Divide(frac);
	Reduce();
	return *this;
}

Fraction Fraction::operator-()
{
	int new_numerator = -numerator;
	int new_denominaator = -denominator;

	Fraction resultFrac(new_numerator, new_denominaator);

	resultFrac.Reduce();


	return resultFrac;
}

Fraction Fraction::operator~()
{
	int new_numerator = denominator;
	int new_denominaator = numerator;

	Fraction resultFrac(new_numerator, new_denominaator);

	resultFrac.Reduce();

	return resultFrac;
}

Fraction Fraction::operator++()
{
	int new_numerator = numerator + denominator;
	int new_denominaator = denominator;

	Fraction resultFrac(new_numerator, new_denominaator);

	resultFrac.Reduce();

	return resultFrac;
}

Fraction Fraction::operator++(int)
{
	Fraction temp = *this;
	++* this;
	return temp;;
}

Fraction Fraction::operator--()
{
	int new_numerator = numerator - denominator;
	int new_denominaator = denominator;

	Fraction resultFrac(new_numerator, new_denominaator);

	resultFrac.Reduce();

	return resultFrac;
}

Fraction Fraction::operator--(int)
{
	Fraction temp = *this;
	--* this;
	return temp;
}

ostream& operator<<(ostream& out, const Fraction& frac)
{
	out << frac.numerator << "/" << frac.denominator << "\n";
	return out;
}		

istream& operator>>(istream& in, const Fraction& frac)
{
	in >> frac.numerator >> frac.denominator;
	return in;
}

bool Fraction::operator<(const Fraction& frac)
{
	if ((numerator / denominator) < (frac.numerator / frac.denominator))
	{
		return true;
	}
	else { return false; }
}

bool Fraction::operator>(const Fraction& frac)
{
	if ((numerator / denominator) > (frac.numerator / frac.denominator))
	{
		return true;
	}
	else { return false; }
}

bool Fraction::operator<=(const Fraction& frac)
{
	if ((numerator / denominator) <= (frac.numerator / frac.denominator))
	{
		return true;
	}
	else { return false; }
}

bool Fraction::operator>=(const Fraction& frac)
{
	if ((numerator / denominator) >= (frac.numerator / frac.denominator))
	{
		return true;
	}
	else { return false; }
}

bool Fraction::operator==(const Fraction& frac)
{
	if ((numerator / denominator) == (frac.numerator / frac.denominator))
	{
		return true;
	}
	else { return false; }
}

bool Fraction::operator!=(const Fraction& frac)
{
	if ((numerator / denominator) != (frac.numerator / frac.denominator))
	{
		return true;
	}
	else { return false; }
}

bool Fraction::operator!()
{
	if (!(numerator / denominator))
	{
		return true;
	}
	else { return false; }
}

Fraction::operator double()
{
	double doubleFrac;

	doubleFrac = (double)(numerator / denominator);
	
	return doubleFrac;
}

Fraction::operator float()
{
	float floatFrac;

	floatFrac = (float)(numerator / denominator);

	return floatFrac;
}