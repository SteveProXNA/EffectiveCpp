#include <assert.h>
#include "Rectangle.h"

// Increase r area.
void makeBigger(Rectangle& r)
{
	int oldHeight = r.getHeight();
	int oldWidth = r.getWidth();

	r.setWidth(oldWidth + 10);
	int newHeight = r.getHeight();

	assert(newHeight, oldHeight);
}

int main()
{
	return 0;
}