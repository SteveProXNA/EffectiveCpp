#include <stdlib.h>

class Bitmap
{
};


class Widget
{
public:
	Widget();
	Widget& operator=(const Widget& rhs);

private:
	Bitmap* pb;
};


// Widget.cpp
// #include "Widget.h"
Widget::Widget() :
	pb(NULL)
{
}

Widget& Widget::operator=(const Widget& rhs)
{
	delete pb;
	pb = new Bitmap(*rhs.pb);

	return *this;
}