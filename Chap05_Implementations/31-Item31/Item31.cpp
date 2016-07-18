#include <memory>
#include <string>
#include "Person3.h"
#include "RealPerson3.h"
#include "Date.h"
#include "Address.h"

int main()
{
	std::string n = "hello";
	Date d;
	Address a;

	std::tr1::shared_ptr<Person3> pp(RealPerson3::create(n, d, a));
	return 0;
}