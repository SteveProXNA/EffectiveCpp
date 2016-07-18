// The Strategy Pattern via Function Pointers.

// Forward declaration
class GameCharacter;

// Function for the default health calculation algorithm.
int defaultHealthCalc(const GameCharacter& gc)
{
	return 0;
}


class GameCharacter
{
public:
	typedef int (*HealthCalcFunc)(const GameCharacter&);

	explicit GameCharacter(HealthCalcFunc hcf = defaultHealthCalc) :
		healthFunc(hcf)
	{
	}

	int healthValue() const
	{
		return healthFunc(*this);
	}

private:
	HealthCalcFunc healthFunc;
};


class EvilBadGuy : public GameCharacter
{
public:
	explicit EvilBadGuy(HealthCalcFunc hcf = defaultHealthCalc) :
		GameCharacter(hcf)
		{
		}
};