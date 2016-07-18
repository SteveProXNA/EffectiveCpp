#pragma once

template <typename T>
class Rational
{
public:
	Rational(const T& numerator = 0, const T& denominator = 1) : n(numerator), d(denominator)
	{
	}

	const T numerator() const { return n; }
	const T denominator() const { return d; }

private:
	T n, d;
};