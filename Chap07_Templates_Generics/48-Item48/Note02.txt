#pragma once

#include <iostream>

template<unsigned n>
struct Fibonacci
{
	enum { value = Fibonacci<n-1>::value + Fibonacci<n-2>::value };
};

template<>
struct Fibonacci<1>
{
	enum { value = 1 };
};

template<>
struct Fibonacci<0>
{
	enum { value = 1 };
};

int main()
{
	//http://en.wikipedia.org/wiki/Fibonacci_number
	std::cout << Fibonacci<0>::value << std::endl;
	std::cout << Fibonacci<1>::value << std::endl;
	std::cout << Fibonacci<2>::value << std::endl;
	std::cout << Fibonacci<3>::value << std::endl;
	std::cout << Fibonacci<4>::value << std::endl;
	std::cout << Fibonacci<5>::value << std::endl;
	std::cout << Fibonacci<6>::value << std::endl;
	std::cout << Fibonacci<7>::value << std::endl;
	std::cout << Fibonacci<8>::value << std::endl;
	std::cout << Fibonacci<9>::value << std::endl;

	return 0;
}