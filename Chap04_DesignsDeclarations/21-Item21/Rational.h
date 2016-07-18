#pragma once

class Rational
{
public:
	Rational(int numerator = 0, int denominator = 1) :
	  n(numerator), d(denominator)
	{
	}

	const Rational operator*(const Rational& rhs)
	{
		Rational result(n * rhs.n, d * rhs.d);
		return result;
	}

	

private:
	int n, d;

	//Bad code #1
	//friend const Rational& operator*(const Rational& lhs, const Rational& rhs)
	//{
	//	Rational result(lhs.n * rhs.n, lhs.d * rhs.d);
	//	return result;
	//}

	//Bad code #2
	//friend const Rational& operator*(const Rational& lhs, const Rational& rhs)
	//{
	//	Rational* result = new Rational(lhs.n * rhs.n, lhs.d * rhs.d);
	//	return *result;
	//}

	//Bad code #3
	//friend const Rational& operator*(const Rational& lhs, const Rational& rhs)
	//{
	//	static Rational result;
	//	return result;
	//}

	friend inline const Rational operator*(const Rational& lhs, const Rational& rhs)
	{
		Rational result(lhs.n * rhs.n, lhs.d * rhs.d);
		return result;
	}

	//bool operator==(const Rational& lhs, const Rational& rhs)
	friend bool operator==(const Rational& lhs, const Rational& rhs)
	{
		return (lhs.n == rhs.n && lhs.d == rhs.d);
	} 
};