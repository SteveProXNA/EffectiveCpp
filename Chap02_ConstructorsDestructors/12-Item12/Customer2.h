#include <string>

void logCall(const std::string& funcName)
{
}

class Date
{
};

class Customer2
{
public:
	Customer2() : name("stevepro") {}

	Customer2(const Customer2& rhs);
	Customer2& operator=(const Customer2& rhs);

private:
	std::string name;
	Date lastTransation;
};


// Customer2.cpp
// #include "Customer2.h"

// Copy constructor	copy rhs data.
Customer2::Customer2(const Customer2& rhs) :
	name(rhs.name)
{
	logCall("Customer2 copy constructor");
}

// Copy assignment operator	copy rhs data.
Customer2& Customer2::operator=(const Customer2& rhs)
{
	logCall("Customer2 copy assignment operator");

	name = rhs.name;
	return *this;
}