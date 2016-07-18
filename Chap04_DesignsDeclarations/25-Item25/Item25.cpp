#pragma once

#include "Widget5.h"

int main()
{
	WidgetStuff::WidgetImpl<int> wi1(1, 2, 3);
	WidgetStuff::WidgetImpl<int> wi2(2, 4, 6);

	WidgetStuff::Widget<int> w1(&wi1);
	WidgetStuff::Widget<int> w2(&wi2);

	WidgetStuff::swap(w1, w2);
	return 0;
}