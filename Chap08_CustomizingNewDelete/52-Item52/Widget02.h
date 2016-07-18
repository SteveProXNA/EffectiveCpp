#pragma once

#include <iostream>
#include <new>

class Widget
{
public:
	// non-normal form of new.
	static void* operator new(std::size_t size, std::ostream& logStream) throw(std::bad_alloc)
	{
		return ::operator new(size);
	}

	// normal class-specific form of delete.
	static void operator delete(void* pMemory, std::size_t size) throw()
	{
		::operator delete(pMemory);
	}
};