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
	// error C2768: 'std::swap' : illegal use of explicit template arguments
	// this code should not compile although some compilers erroneously accept it
	template<typename T>
	void swap<Widget<T> >(Widget<T>& a, Widget<T>& b)
	{
		a.swap(b);
	}
}