#include <stdlib.h>

class Bitmap
{
};


class Widget4
{
public:
	Widget4();
	Widget4& operator=(const Widget4& rhs);

	// Exchange *this and rhs data.
	void swap(Widget4& rhs);

private:
	Bitmap* pb;
};


// Widget4.cpp
// #include "Widget4.h"
Widget4::Widget4() :
	pb(NULL)
{
}

Widget4& Widget4::operator=(const Widget4& rhs)
{
	// Copy constructor: make copy of rhs data.
	Widget4 temp(rhs);

	// IntelliSense: qualifiers dropped in binding reference of type "Widget4 &" to initializer of type "const Widget4"
	//swap(rhs);

	swap(const_cast<Widget4&>(rhs));
	return *this;
}

void Widget4::swap(Widget4& rhs)
{
}