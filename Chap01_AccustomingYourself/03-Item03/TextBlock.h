#include <iostream>
#include <string>

class TextBlock
{
public:
	TextBlock(std::string t) : text(t)
	{
	}

	// operator[] for const objects.
	const char& operator[](std::size_t position) const
	{
		return text[position];
	}

	// operator[] for non-const objects.
	char& operator[](std::size_t position)
	{
		return text[position];
	}

private:
	std::string text;
};