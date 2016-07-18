#pragma once

#include "Rational03.h"

int main()
{
	Rational<int> oneHalf(1, 2);
	Rational<int> result = oneHalf * 2;

	return 0;
}