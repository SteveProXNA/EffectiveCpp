#pragma once

#include <memory>
class Mutex2
{
};

// Lock mutex pointed to by pm
void lock(Mutex2* pm)
{
}

// Unlock the mutex
void unlock(Mutex2* pm)
{
	int x = 7;
}

class Lock2
{
public:
	explicit Lock2(Mutex2* pm) : mutexPtr(pm, unlock)
	{
		lock(mutexPtr.get());
	}

	~Lock2()
	{
	}
private:
	std::tr1::shared_ptr<Mutex2> mutexPtr;
};