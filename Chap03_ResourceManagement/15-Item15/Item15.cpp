#pragma once

#include <memory>
#include "FontHandle.h"

FontHandle getFontHandle()
{
	FontHandle fh;
	return fh;
}

int changeFontSize(FontHandle fh)
{
	return 17;
}

int main()
{
	Font f(getFontHandle());

	// cannot convert parameter from Font to FontHandle
	//int newFontSize = changeFontSize(f);

	// explicit
	//int newFontSize = changeFontSize(f.get());

	// implicit
	int newFontSize = changeFontSize(f);

	// Oops!  Meant to copy a Font object.
	// But instead implicitly converted f1 into its underlying FontHandle
	// and then copied that
	Font f1(getFontHandle());
	FontHandle f2 = f1;
	return 0;
}