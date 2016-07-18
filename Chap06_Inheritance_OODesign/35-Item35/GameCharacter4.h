// The "Classic" Strategy Pattern.

// Forward declaration
class GameCharacter;


class HealthCalcFunc
{
public:
	virtual int calc(const GameCharacter& gc) const
	{
		return 17;
	}
};

class MyHealthCalcFunc : public HealthCalcFunc
{
public:
	int calc(const GameCharacter& gc) const
	{
		return 25;
	}
};


HealthCalcFunc defaultHealthCalcFunc;


class GameCharacter
{
public:
	explicit GameCharacter(HealthCalcFunc* phcf = &defaultHealthCalcFunc) :
		pHealthCalcFunc(phcf)
	{
	}

	int healthValue() const
	{
		return pHealthCalcFunc->calc(*this);
	}

private:
	HealthCalcFunc* pHealthCalcFunc;
};


class EvilBadGuy : public GameCharacter
{
public:
	explicit EvilBadGuy(HealthCalcFunc* phcf = &defaultHealthCalcFunc) :
		GameCharacter(phcf)
		{
		}
};