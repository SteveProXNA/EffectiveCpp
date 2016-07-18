#pragma once

class Rational
{
public:
	Rational(int numerator = 0, int denominator = 1) :
	  n(numerator), d(denominator)
	{
	}

	int numerator() const { return n; }
	int denominator() const { return d; }

private:
	int n, d;
};


const Rational operator*(const Rational& lhs, const Rational& rhs)
{
	return Rational(lhs.numerator() * rhs.numerator(), lhs.denominator() * rhs.denominator());
}