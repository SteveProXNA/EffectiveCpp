// Represents airports
class Airport
{
};


class Airplane
{
public:
	virtual void fly(const Airport& destination) = 0;
};

// An implementation of pure virtual function.
void Airplane::fly(const Airport& destination)
{
	// default code for flyaing an airplane to the given destination.
}


class ModelA : public Airplane
{
public:
	virtual void fly(const Airport& destination)
	{
		Airplane::fly(destination);
	}
};

class ModelB : public Airplane
{
public:
	virtual void fly(const Airport& destination)
	{
		Airplane::fly(destination);
	}
};

class ModelC : public Airplane
{
public:
	virtual void fly(const Airport& destination);
};

void ModelC::fly(const Airport& destination)
{
	// code for flyaing a ModelC airplane to the given destination.
}