class Widget
{
public:
	// Return type is reference to the current class.
	Widget& operator=(const Widget& rhs)
	{
		// Return the left-hand object
		return *this;
	}
};