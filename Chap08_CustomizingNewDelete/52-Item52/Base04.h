#pragma once

#include <iostream>
#include <new>

class Base
{
public:
	// this hides the normal global forms
	static void* operator new(std::size_t size, std::ostream& logStream) throw(std::bad_alloc)
	{
		return ::operator new(size);
	}
};


class Derived : public Base
{
public:
	// re-declares the normal form of new.
	static void* operator new(std::size_t size) throw(std::bad_alloc)
	{
		return ::operator new(size);
	}
};