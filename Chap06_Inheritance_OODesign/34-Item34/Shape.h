#include <string>

class Shape
{
public:
	virtual void draw() = 0 {}
	virtual void error(const std::string& msg) {}
	int objectID() const;
};

class Rectangle : public Shape
{
public:
	void draw() {}
};

class Ellipse : public Shape
{
public:
	void draw() {}
};