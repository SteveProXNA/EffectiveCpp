#pragma once

#include "Derived.h"

template<typename IterT>
void workWithIterator(IterT iter)
{
	typename std::iterator_traits<IterT>::value_type temp(*iter);
}

template<typename IterT>
void workWithIterator2(IterT iter)
{
	typedef typename std::iterator_traits<IterT>::value_type value_type;
	value_type temp(*iter);
}

int main()
{
	return 0;
}