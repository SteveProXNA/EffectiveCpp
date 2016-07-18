#include <string>

class CTextBlock
{
public:
	CTextBlock(char* t) : pText(t)
	{
	}

	char& operator[](std::size_t position) const
	{
		return pText[position];
	}

private:
	char* pText;
};