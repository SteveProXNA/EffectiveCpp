#pragma once

#include <new>

class Base
{
public:
	static void* operator new(std::size_t size) throw(std::bad_alloc);
};


void* Base::operator new(std::size_t size) throw(std::bad_alloc)
{
	// if size is "wrong' then have standard operator new handle the request.
	if (size != sizeof(Base))
	{
		return ::operator new(size);
	}

	// Otherwise handle the request here.
	return NULL;
}


// Derived doesn't declare operator new
class Derived : public Base
{
};