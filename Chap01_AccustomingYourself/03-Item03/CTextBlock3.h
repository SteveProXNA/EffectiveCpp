#include <string>

class CTextBlock3
{
public:
	CTextBlock3::CTextBlock3(char* t) : pText(t), lengthIsValid(false)
	{
	}

	std::size_t length() const;

private:
	char* pText;

	mutable std::size_t textLength;
	mutable bool lengthIsValid;
};

//std::size_t length() const;