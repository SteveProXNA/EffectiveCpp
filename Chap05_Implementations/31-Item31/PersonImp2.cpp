#include "PersonImpl2.h"

PersonImpl2::PersonImpl2() {}

PersonImpl2::PersonImpl2(const std::string& name, const Date& birthday, const Address& addr) :
	theName(name), theBirthDate(birthday), theAddress(addr)
{
}