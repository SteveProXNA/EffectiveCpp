#pragma once

#include <string>
#include "Widget2.h"

void outOfMem()
{
}

int main()
{
	Widget* pw1 = new Widget;
	if (0 == pw1)
	{
	}

	Widget* pw2 = new (std::nothrow) Widget;
	if (0 == pw2)
	{
	}

	return 0;
}