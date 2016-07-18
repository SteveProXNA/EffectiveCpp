#pragma once

#include <algorithm>

class WidgetImpl
{
public:
	WidgetImpl(int x, int y, int z) :
	  a(x), b(y), c(z)
	{
	}

private:
	int a, b, c;
};


class Widget
{
public:
	Widget(WidgetImpl* wi) : pImpl(wi) {}
	void swap(Widget& other)
	{
		using std::swap;
		swap(pImpl, other.pImpl);
	}

private:
	WidgetImpl* pImpl;
};


namespace std
{
	// total template specialization for std::swap
	template<>
	void swap<Widget>(Widget& a, Widget& b)
	{
		a.swap(b);
	}
}