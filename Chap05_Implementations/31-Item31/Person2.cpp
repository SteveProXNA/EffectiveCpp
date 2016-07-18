#include "Person2.h"
#include "PersonImpl2.h"

Person2::Person2() {}

Person2::Person2(const std::string& name, const Date& birthday, const Address& addr) :
	pImpl(new PersonImpl2(name, birthday, addr))
{
}

std::string Person2::name() const
{
	return pImpl->name();
}
std::string Person2::birthDate() const
{
	return pImpl->birthDate();
}
std::string Person2::address() const
{
	return pImpl->address();
}