#include "Base4.h"

int main()
{
	Derived d;
	const int x = 5;

	d.mf1();		// Fine: calls Derived::mf1
	//d.mf1(x);		// Error Base::mf1() is hidden.
	return 0;
}