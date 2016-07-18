#pragma once

namespace stevepro
{
	// typical implementation of std::swap
	template<typename T>
	void swapper(T& a, T& b)
	{
		T temp(a);
		a = b;
		b = temp;
	}
}