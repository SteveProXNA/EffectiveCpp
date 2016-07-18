#pragma once

#include <string>

class Person
{
public:
	Person() : name("AAAA"), addr("BBBB")
	{
	}
	virtual ~Person() {}

private:
	std::string name;
	std::string addr;
};