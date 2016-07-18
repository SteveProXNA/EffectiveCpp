#pragma once

#include "Rational2.h"

int main()
{
	Rational oneEighth(1, 8);
	Rational oneFourth(1, 4);

	Rational result;
	result = oneFourth * oneEighth;		// fine
	result = result * oneEighth;		// fine

	result = oneFourth * 2;				// fine
	result = 2 * oneFourth;				// hooray, it works!

	return 0;
}