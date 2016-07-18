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

	const Rational operator*(const Rational& rhs) const
	{
		return Rational(n * rhs.numerator(), d * rhs.denominator());
	}

private:
	int n, d;
};