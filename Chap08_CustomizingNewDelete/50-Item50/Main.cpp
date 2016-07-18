#pragma once

#include <new>

static const int signature = 0xDEADBEEF;
typedef unsigned char Byte;

// this code has several flaws!
void* operator new(std::size_t size) throw(std::bad_alloc)
{
	using namespace std;

	// increase size of request so 2x signatures will also fit inside
	size_t realSize = size + 2 * sizeof(int);

	// call malloc to get the actual memory
	void* pMem = malloc(realSize);
	if (!pMem)
	{
		throw bad_alloc();
	}

	// write signature into first and last parts of the memory
	*(static_cast<int*>(pMem)) = signature;
	*(reinterpret_cast<int*>(static_cast<Byte*>(pMem) + realSize - sizeof(int))) = signature;

	// return a pointer to the memory just past the first signature
	return static_cast<Byte*>(pMem) + sizeof(int);
}

int main()
{
	return 0;
}