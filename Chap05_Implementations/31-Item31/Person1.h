#include <string>
#include "Address.h"
#include "Date.h"

class Person1
{
public:
	Person1();
	Person1(const std::string& name, const Date& birthday, const Address& addr);

	std::string name() const;
	std::string birthDate() const;
	std::string address() const;

private:
	std::string theName;	// implementation detail
	Date theBirthDate;		// implementation detail
	Address theAddress;		// implementation detail
};