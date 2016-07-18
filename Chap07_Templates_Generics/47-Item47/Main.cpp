#pragma once

//http://www.cplusplus.com/reference/iterator/iterator_traits/
#include <iterator>

template<typename IterT, typename DistT>
void doAdvance(IterT& iter, DistT d, std::random_access_iterator_tag)
{
	iter += d;
}

template<typename IterT, typename DistT>
void doAdvance(IterT& iter, DistT d, std::bidirectional_iterator_tag)
{
	if (d >= 0)
	{
		while (d--)
		{
			++iter;
		}
	}
	else
	{
		while (d++)
		{
			--iter;
		}
	}
}

template<typename IterT, typename DistT>
void doAdvance(IterT& iter, DistT d, std::input_iterator_tag)
{
	if (d < 0)
	{
		throw std::out_of_range("Negative distance");
	}
	while (d--)
	{
		++iter;
	}
}

template<typename IterT, typename DistT>
void advance(IterT& iter, DistT d)
{
	//doAdvance(iter, d, typename std::iterator_traits<IterT>::iterator_category());

	auto category = typename std::iterator_traits<IterT>::iterator_category();
	doAdvance(iter, d, category);
}

int main()
{
	return 0;
}