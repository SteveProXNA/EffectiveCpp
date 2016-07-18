#include <string>
#include <memory>

class PersonImpl2;
class Date;
class Address;

class Person2
{
public:
	Person2();
	Person2(const std::string& name, const Date& birthday, const Address& addr);

	std::string name() const;
	std::string birthDate() const;
	std::string address() const;

private:
	// ptr to implementation (Item13)
	std::tr1::shared_ptr<PersonImpl2> pImpl;
};