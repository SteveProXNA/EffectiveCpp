class Widget2
{
public:
	// Standard copy assignment operators.
	Widget2& operator=(const Widget2& rhs)
	{
		return *this;
	}

	// Convention applies to +=, -=, *=, etc.
	Widget2& operator+=(const Widget2& rhs)
	{
		return *this;
	}

	// Applies even if operator's parameter is unconventional.
	Widget2& operator=(int rhs)
	{
		return *this;
	}
};