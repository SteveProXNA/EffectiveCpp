#include <memory>
#include <string>
#include "Person3.h"
#include "Date.h"
#include "Address.h"

class RealPerson3 : public Person3
{
public:
	RealPerson3() {}
	RealPerson3(const std::string& name, const Date& birthday, const Address& addr) :
		theName(name), theBirthDate(birthday), theAddress(addr)
	{
	}
	
	virtual ~RealPerson3() {}

	static std::tr1::shared_ptr<Person3> create(const std::string& name, const Date& birthday, const Address& addr)
	{
		return std::tr1::shared_ptr<Person3>(new RealPerson3(name, birthday, addr));
	}

	std::string name() const		{ return theName; }
	std::string birthDate() const	{ return "date"; }
	std::string address() const		{ return "addr"; }

private:
	std::string theName;
	Date theBirthDate;
	Address theAddress;
};