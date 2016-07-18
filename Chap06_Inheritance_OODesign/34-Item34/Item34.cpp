#include "Airport3.h"

int main()
{
	Airport a;

	Airplane* b = new ModelB;
	b->fly(a);

	Airplane* c = new ModelC;
	c->fly(a);

	delete c;
	delete b;

	return 0;
}