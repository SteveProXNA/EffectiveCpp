#pragma once

template<typename T>
class Rational;


template<typename T>
const Rational<T> doMultiply(const Rational<T>& lhs, const Rational<T>& rhs)
{
	return Rational<T>(lhs.numerator() * rhs.numerator(), lhs.denominator() * rhs.denominator());
}


template<typename T>
class Rational
{
public:
	Rational(const T& numerator = 0, const T& denominator = 1) : n(numerator), d(denominator)
	{
	}

	const T numerator() const { return n; }
	const T denominator() const { return d; }

	friend const Rational<T> operator*(const Rational<T>& lhs, const Rational<T>& rhs)
	{
		return doMultiply(lhs, rhs);
	}

private:
	T n, d;
};