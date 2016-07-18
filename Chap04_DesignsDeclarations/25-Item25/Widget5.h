#pragma once

#include <algorithm>

namespace WidgetStuff
{
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


	template<typename T>
	void swap(Widget<T>& a, Widget<T>& b)
	{
		a.swap(b);
	}
}