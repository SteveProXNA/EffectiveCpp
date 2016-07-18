#pragma once

#include <string>
#include "Person.h"

class Student : public Person
{
public:
	Student() : schoolName("CCCC"), schoolAddr("DDDD")
	{
	}
	~Student() {}

private:
	std::string schoolName;
	std::string schoolAddr;
};