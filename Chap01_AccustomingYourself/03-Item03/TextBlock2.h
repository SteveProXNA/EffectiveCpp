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
		// In order for the non-const operator[] to call const operator[].
		return const_cast<char&>(static_cast<const TextBlock&>(*this)[position]);
	}

private:
	std::string text;
};