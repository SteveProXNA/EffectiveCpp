#include "Customer.h"

class PriorityCustomer : public Customer
{
public:
	PriorityCustomer() :
		priority(1)
	{}

	PriorityCustomer(const PriorityCustomer& rhs);
	PriorityCustomer& operator=(const PriorityCustomer& rhs);

private:
	int priority;
};


//PriorityCustomer.cpp
//#include "PriorityCustomer.h"

PriorityCustomer::PriorityCustomer(const PriorityCustomer& rhs) :
	priority(rhs.priority)
{
	logCall("PriorityCustomer copy constructor");
}

PriorityCustomer& PriorityCustomer::operator=(const PriorityCustomer& rhs)
{
	logCall("PriorityCustomer copy assignment operator");

	priority = rhs.priority;
	return *this;
}