#include <stdlib.h>

class Bitmap
{
};


class Widget5
{
public:
	Widget5();
	Widget5& operator=(Widget5 rhs);

	// Exchange *this and rhs data.
	void swap(Widget5& rhs);

private:
	Bitmap* pb;
};


// Widget5.cpp
// #include "Widget5.h"
Widget5::Widget5() :
	pb(NULL)
{
}

Widget5& Widget5::operator=(Widget5 rhs)
{
	swap(rhs);
	return *this;
}

void Widget5::swap(Widget5& rhs)
{
}