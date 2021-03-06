// Base class for all transactions.
class Transation
{
public:
	Transation();
	virtual ~Transation() {}

	virtual void logTransaction() const = 0
	{
	}
};


// Implementation of base class ctor.
Transation::Transation()
{
	logTransaction();
}


class BuyTransaction : public Transation
{
public:
	BuyTransaction() : Transation()
	{
	}

	virtual void logTransaction() const
	{
	}
};


class SellTransaction : public Transation
{
public:
	virtual void logTransaction() const
	{
	}
};