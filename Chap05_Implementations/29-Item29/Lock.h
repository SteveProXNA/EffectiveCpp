#pragma once
class Mutex
{
};

// Lock mutex pointed to by pm
void lock(Mutex* pm)
{
}

// Unlock the mutex
void unlock(Mutex* pm)
{
}

class Lock
{
public:
	explicit Lock(Mutex* pm) : mutexPtr(pm)
	{
		lock(mutexPtr);
	}

	~Lock()
	{
		unlock(mutexPtr);
	}

private:
	Mutex* mutexPtr;
};