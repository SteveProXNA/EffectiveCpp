#include <stdlib.h>

class Bitmap
{
};


class Widget2
{
public:
	Widget2();
	Widget2& operator=(const Widget2& rhs);

private:
	Bitmap* pb;
};


// Widget2.cpp
// #include "Widget2.h"
Widget2::Widget2() :
	pb(NULL)
{
}

Widget2& Widget2::operator=(const Widget2& rhs)
{
	// error C2106: '=' : left operand must be l-value
	//if (&rhs = this)

	// error C2440: '=' : cannot convert from 'const Widget2 *' to 'Widget2 *const '
	//if (this = &rhs)

	// Identity test.
	if (&rhs == this)
	{
		return *this;
	}

	delete pb;
	pb = new Bitmap(*rhs.pb);

	return *this;
}