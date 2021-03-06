#include <string>
#include "Database.h"

// This class specifies the interface to be implemented.
class IPerson
{
public:
	virtual ~IPerson();

	virtual std::string name() const = 0;
	virtual std::string birthDate() const = 0;
};


class PersonInfo
{
public:
	explicit PersonInfo(DatabaseID pid);
	virtual ~PersonInfo();

	virtual const char* theName() const;
	virtual const char* theBirthDate() const;

private:
	virtual const char* valueDelimOpen() const;
	virtual const char* valueDelimClose() const;
};


static const int Max_Formatted_Field_Value_Length = 80;

const char* PersonInfo::valueDelimOpen() const
{
	// Default opening delimiter.
	return "[";
}

const char* PersonInfo::valueDelimClose() const
{
	// Default closing delimiter.
	return "]";
}


const char* PersonInfo::theName() const
{
	// Reserve buffer for return value;
	// Because this is static it's automatically initialized to all zeros
	static char value[Max_Formatted_Field_Value_Length];

	// Write opening delimiter.
	strcpy_s(value, Max_Formatted_Field_Value_Length, valueDelimOpen());

	// Append to the string in value this object's
	// name field (being careful to avoid buffer overrun)

	// Write closing delimiter.
	strcat_s(value, Max_Formatted_Field_Value_Length, valueDelimClose());
	return value;
}


// Note the use of multiple inheritance.
class CPerson : public IPerson, private PersonInfo
{
public:
	explicit CPerson(DatabaseID id) : PersonInfo(id)
	{
	}

	// Implementation of the required IPerson member functions.
	virtual std::string name() const
	{
		return PersonInfo::theName();
	}

	virtual std::string birthDate()
	{
		return PersonInfo::theBirthDate();
	}

private:
	// Redefinitions of inherited virtual delimiter functions.
	const char* valueDelimOpen() const { return ""; }
	const char* valueDelimClose() const { return ""; }
};