#include "CTextBlock3.h"

std::size_t CTextBlock3::length() const
{
	if (!lengthIsValid)
	{
		textLength = std::strlen(pText);
		lengthIsValid = true;
	}

	return textLength;
}