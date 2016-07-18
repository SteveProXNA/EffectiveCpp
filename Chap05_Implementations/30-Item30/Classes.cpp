#include "Classes.h"

/*
// Conceptual implementation of "empty" Derived ctor.
Derived::Derived()
{
	
	// initialize Base part.
	Base::Base();

	try
	{
		// try to construct dm1.
		// if it throws then destroy base class
		// part and propagate the exception
		dm1.std::string::string();
	}
	catch (...)
	{
		Base::~Base();
		throw;
	}

	try
	{
		// try to construct dm2.
		dm2.std::string::string();
	}
	catch(...)
	{
		// if it throws then destroy dm1 + base class
		// part and propagate the exception
		dm1.std::string::~string();
		Base::~Base();
		throw;
	}

	try
	{
		// try to construct dm3.
		dm3.std::string::string();
	}
	catch(...)
	{
		// if it throws then destroy dm2, dm1 + base class
		// part and propagate the exception
		dm2.std::string::~string();
		dm1.std::string::~string();
		Base::~Base();
		throw;
	}
}
*/