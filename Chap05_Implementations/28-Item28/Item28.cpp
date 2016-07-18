#pragma once

#include "Rectangle3.h"

// return a rectangle by value (Item3 return const)
const Rectangle boundingBox(const GuiObject& obj)
{
	Rectangle r;
	return r;
}

int main()
{
	// make pgo point to some GUI object
	GuiObject* pgo = new GuiObject;

	// get ptr to the upper left point of its bounding box
	const Point* pUpperLeft = &(boundingBox(*pgo)).upperLeft();

	delete pgo;
	return 0;
}