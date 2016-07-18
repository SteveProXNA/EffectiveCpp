#pragma once

#include <algorithm>

template<typename T>
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


template<typename T>
class Widget
{
public:
	Widget(WidgetImpl<T>* wi) : pImpl(wi) {}
	void swap(Widget& other)
	{
		using std::swap;
		swap(pImpl, other.pImpl);
	}

private:
	WidgetImpl<T>* pImpl;
};


namespace std
{
	// partial specialize a function template
	// works but shouldn't add new partial templates to std
	template<typename T>
	void swap(Widget<T>& a, Widget<T>& b)
	{
		a.swap(b);
	}
}