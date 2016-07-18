// The Strategy Pattern via tr1::function.

#include <functional>


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
	// HealthCalcFunc is any callable entity that can be called with
	// anything compatible with a GameCharacter and that returns
	// anything compatible with an int; see below for details.
	typedef std::tr1::function<int (const GameCharacter&)> HealthCalcFunc;

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

class EyeCandyGuy : public GameCharacter
{
public:
	explicit EyeCandyGuy(HealthCalcFunc hcf = defaultHealthCalc) :
		GameCharacter(hcf)
		{
		}
};


// New flexibility:

// Health calculation function.
// Note: non-int return type.
short calcHealth(const GameCharacter&)
{
	return 256;
}

// Class for health calculation object.
struct HealthCalculator
{
	// Calculation function object.
	int operator()(const GameCharacter&) const
	{
		return 7;
	}
};


class GameLevel
{
public:
	// Health calculation member function.
	// Note: non-int return type.
	float health(const GameCharacter&) const
	{
		return 7.5f;
	}
};