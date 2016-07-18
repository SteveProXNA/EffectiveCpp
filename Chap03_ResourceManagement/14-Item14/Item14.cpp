#pragma once
#include "Lock2.h"

int main()
{
	// Define the mutex you need to use.
	Mutex2 m;

	// Create block to define critical section.
	Lock2 m1(&m);

	Lock2 m2(m1);

	// Automatically unlock mutex end-of-block.
	return 0;
}