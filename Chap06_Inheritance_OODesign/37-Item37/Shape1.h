class Shape
{
public:
	enum ShapeColor { Red, Green, Blue };

	// All shapes must offer a function to draw themselves.
	virtual void draw(ShapeColor color = Red) const = 0;
};


class Rectangle : public Shape
{
public:
	// Notice the different default parameter value = bad!
	virtual void draw(ShapeColor color = Green) const
	{
	}
};


class Circle : public Shape
{
public:
	virtual void draw(ShapeColor color) const
	{
	}
};