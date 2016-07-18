#include <string>
#include "Address.h"
#include "Date.h"

class PersonImpl2
{
public:
	PersonImpl2();
	PersonImpl2(const std::string& name, const Date& birthday, const Address& addr);

	std::string name() const		{ return theName; }
	std::string birthDate() const	{ return "date"; }
	std::string address() const		{ return "addr"; }

private:
	std::string theName;	// implementation detail
	Date theBirthDate;		// implementation detail
	Address theAddress;		// implementation detail
};