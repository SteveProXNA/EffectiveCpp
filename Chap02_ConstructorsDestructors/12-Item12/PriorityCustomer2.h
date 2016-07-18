#include "Customer.h"

class PriorityCustomer2 : public Customer
{
public:
	PriorityCustomer2() :
		priority(1)
	{}

	PriorityCustomer2(const PriorityCustomer2& rhs);
	PriorityCustomer2& operator=(const PriorityCustomer2& rhs);
	
private:
	int priority;
};


//PriorityCustomer2.cpp
//#include "PriorityCustomer2.h"

// Invoke base class copy constructor.
PriorityCustomer2::PriorityCustomer2(const PriorityCustomer2& rhs) :
	Customer(rhs),
	priority(rhs.priority)
{
	logCall("PriorityCustomer2 copy constructor");
}

// Invoke base class copy assignment operator.
PriorityCustomer2& PriorityCustomer2::operator=(const PriorityCustomer2& rhs)
{
	logCall("PriorityCustomer2 copy assignment operator");

	Customer::operator=(rhs);
	priority = rhs.priority;

	return *this;
}