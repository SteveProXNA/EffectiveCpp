#pragma once

#include "Widget1.h"

template<typename T>
void doProcessing(T& w)
{
	if (w.size() > 10)
	{
		T temp(w);
		temp.normalize();
		temp.swap(w);
	}
}

int main()
{
	Widget w(20);
	doProcessing(w);
	return 0;
}