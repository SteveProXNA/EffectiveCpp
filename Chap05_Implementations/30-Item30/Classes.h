#include <iostream>

class Base
{
public:

private:
	// base members 1 and 2.
	std::string bm1, bm2;
};


class Derived : public Base
{
public:
	// Derived ctor is empty - or is it?
	Derived() {}

private:
	// derived members 1-3.
	std::string dm1, dm2, dm3;
};