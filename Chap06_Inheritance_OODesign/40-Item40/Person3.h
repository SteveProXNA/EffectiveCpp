#include <string>
#include "Database.h"

class IPerson
{
public:
	virtual ~IPerson();

	virtual std::string name() const = 0;
	virtual std::string birthDate() const = 0;
};


