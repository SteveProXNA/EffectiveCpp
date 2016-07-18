#pragma once

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
	Widget(const Widget& rhs);
	Widget& operator=(const Widget& rhs)
	{
		*pImpl = *(rhs.pImpl);
		return *this;
	}

private:
	WidgetImpl* pImpl;
};