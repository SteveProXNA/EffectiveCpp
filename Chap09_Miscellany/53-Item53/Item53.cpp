// Project | Configuration | C/C++ | General
// Warning Level : Enable All Warnings (/Wall)

class B
{
public:
	virtual void f() const;
};


class D : public B
{
public:
	virtual void f();
};


int main()
{
	return 0;
}