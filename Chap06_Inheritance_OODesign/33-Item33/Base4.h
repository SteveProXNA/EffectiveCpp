class Base
{
public:
	virtual void mf1() = 0;
	virtual void mf1(int i) {}
};

class Derived : private Base
{
public:
	virtual void mf1()
	{
		// forwarding function.
		// implicitly inline
		Base::mf1(30);
	}
};