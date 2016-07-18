#include "ABEntry.h"

//03. Empty default-constructed values
ABEntry::ABEntry(const std::string& name, const std::string& address, const std::list<PhoneNumber>& phones) :
	theName(),
	theAddress(),
	thePhones(),
	numTimesConsulted(0)
{
}

//02. Initialization list.
//ABEntry::ABEntry(const std::string& name, const std::string& address, const std::list<PhoneNumber>& phones) :
//	theName(name),
//	theAddress(address),
//	thePhones(phones),
//	numTimesConsulted(0)
//{
//	// the ctor body is empty.
//}


//01. Assignments
//ABEntry::ABEntry(const std::string& name, const std::string& address, const std::list<PhoneNumber>& phones)
//{
//	// these are all assignments.
//	theName = name;
//	theAddress = address;
//	thePhones = phones;
//	numTimesConsulted = 0;
//}