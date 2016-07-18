#include "Shape2.h"

int main()
{
	Shape* pr = new Rectangle;	// static type = Shape*		dynaminc type = Rectangle*
	Shape* pc = new Circle;		// static type = Shape*		dynaminc type = Circle*


	
	// Calls Shape::draw(Shape::Blue);
	// Calls Rectangle::doDraw(Shape::Blue);
	pr->draw(Shape::Blue);

	// Calls Shape::draw();
	// Calls Rectangle::doDraw(Shape::Red);
	pr->draw();


	// Calls Shape::draw(Shape::Red);
	// Calls Circle::draw(Shape::Red);
	pc->draw(Shape::Red);

	// Calls Shape::draw();
	// Calls Circle::draw(Shape::Red);
	pc->draw();


	delete pc;
	delete pr;

	return 0;
}