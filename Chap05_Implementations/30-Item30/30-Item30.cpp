class Person
{
public:
	// an implicit inline request:
	// age is defined in a class definition.
	int age() const { return theAge; }

private:
	int theAge;
};


// assume compilers are willing to inline calls to f
inline void f()
{
}

// pf points to f
void (*pf)() = f;


int main()
{
	// this call will be inlined because it's a "normal" call.
	f();

	// this call probably won't be because it's through a function pointer
	pf();
	return 0;
}