#pragma once

class FontHandle
{
};


void releaseFontHandle(FontHandle fh)
{
}


class Font
{
public:
	explicit Font(FontHandle fontHandle) : fh(fontHandle)
	{
	}

	~Font()
	{
		releaseFontHandle(fh);
	}

	// explicit
	//FontHandle get() const { return fh; }

	// implicit
	operator FontHandle() const { return fh; }

private:
	FontHandle fh;
};