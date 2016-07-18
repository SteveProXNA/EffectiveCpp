// Base class for all transactions.
class Transation2
{
public:
	Transation2();
	virtual ~Transation2() {}

	virtual void logTransaction() const = 0
	{
	}

private:
	void init()
	{
		logTransaction();
	}
};


// Implementation of base class ctor.
Transation2::Transation2()
{
	init();
}


class BuyTransaction2 : public Transation2
{
public:
	BuyTransaction2() : Transation2()
	{
	}

	virtual void logTransaction() const
	{
	}
};


class SellTransaction2 : public Transation2
{
public:
	virtual void logTransaction() const
	{
	}
};