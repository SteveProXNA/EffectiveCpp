#pragma once

class Date;
class Address;

class Person3
{
public:
	Person3() {}
	Person3(const std::string& name, const Date& birthday, const Address& addr);
	virtual ~Person3() {}
	
	virtual std::string name() const = 0;
	virtual std::string birthDate() const = 0;
	virtual std::string address() const = 0;
};