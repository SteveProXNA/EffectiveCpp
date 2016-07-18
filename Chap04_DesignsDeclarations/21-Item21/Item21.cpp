#pragma once

#include "Rational.h"

int main()
{
	Rational a(1, 2);
	Rational b(3, 5);

	//Rational c = a * b;

	// same as operator*(operator*(x, y), z)
	Rational w, x, y, z;
	w = x * y * z;
	
	// if operator==(operator*(a,b), operator*(c,d)))
	if ((x * y) == (z * w))
	{
	}
	return 0;
}