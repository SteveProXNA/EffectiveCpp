#include "Person1.h"

Person1::Person1() {}

Person1::Person1(const std::string& name, const Date& birthday, const Address& addr) :
	theName(name), theBirthDate(birthday), theAddress(addr)
{
}	