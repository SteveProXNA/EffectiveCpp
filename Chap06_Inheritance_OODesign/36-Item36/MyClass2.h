class B
{
public:
	void mf()
	{
	}
};

class D : public B
{
public:
	// hides B::mf() - Item33
	void mf()
	{
	}
};