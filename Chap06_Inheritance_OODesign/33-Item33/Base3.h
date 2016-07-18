class Base
{
public:
	virtual void mf1() = 0;
	virtual void mf1(int i) {}
	virtual void mf2() {}

	void mf3() {}
	void mf3(double d) {}

private:
	int x;
};

class Derived : public Base
{
public:
	// Make all things in Base named mf1 and mf3
	// visible (and public) in Derived's scope
	using Base::mf1;
	using Base::mf3;

	virtual void mf1() {}
	void mf3() {}
	void mf4();
};