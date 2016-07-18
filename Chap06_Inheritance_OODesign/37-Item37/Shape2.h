class Shape
{
public:
	enum ShapeColor { Red, Green, Blue };

	// Non non-virtual calls virtual function
	void draw(ShapeColor color = Red) const
	{
		doDraw(color);
	}

private:
	// Private pure virtual function does actual work.
	virtual void doDraw(ShapeColor color) const = 0;
};


class Rectangle : public Shape
{
private:
	// Notice lack of default parameter value
	virtual void doDraw(ShapeColor color) const
	{
	}
};


class Circle : public Shape
{
	// Don't redefine inherited default parameter value!
	virtual void doDraw(ShapeColor color) const
	{
	}
};