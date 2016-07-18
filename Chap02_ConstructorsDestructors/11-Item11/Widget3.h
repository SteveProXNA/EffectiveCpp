#include <stdlib.h>

class Bitmap
{
};


class Widget3
{
public:
	Widget3();
	Widget3& operator=(const Widget3& rhs);

private:
	Bitmap* pb;
};


// Widget3.cpp
// #include "Widget3.h"
Widget3::Widget3() :
	pb(NULL)
{
}

Widget3& Widget3::operator=(const Widget3& rhs)
{
	Bitmap* pOrig = pb;
	pb = new Bitmap(*rhs.pb);

	delete pOrig;
	return *this;
}