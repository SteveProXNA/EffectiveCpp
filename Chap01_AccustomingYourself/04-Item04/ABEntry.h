#include <list>
#include <string>

class PhoneNumber {};

class ABEntry
{
public:
	ABEntry(const std::string& name, const std::string& address, const std::list<PhoneNumber>& phones);

private:
	std::string theName;
	std::string theAddress;
	std::list<PhoneNumber> thePhones;
	int numTimesConsulted;
};