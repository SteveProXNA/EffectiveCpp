#pragma once

template<typename T>
class Rational
{
public:
	Rational(const T& numerator = 0, const T& denominator = 1) : n(numerator), d(denominator)
	{
	}

	const T numerator() const { return n; }
	const T denominator() const { return d; }

	// WARNING: argument list for class template "Rational" is missing
	friend const Rational operator*(const Rational& lhs, const Rational& rhs)
	{
		return Rational(lhs.numerator() * rhs.numerator(), lhs.denominator() * rhs.denominator());
	}

private:
	T n, d;
};