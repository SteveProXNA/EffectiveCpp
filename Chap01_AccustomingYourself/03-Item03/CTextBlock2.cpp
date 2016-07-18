#include "CTextBlock2.h"

std::size_t CTextBlock2::length() const
{
	if (!lengthIsValid)
	{
		// error C3490: 'textLength' cannot be modified because it is being accessed through a const object
		// error C3490: 'lengthIsValid' cannot be modified because it is being accessed through a const object

		//textLength = std::strlen(pText);		// error! can't assign to textLength
		//lengthIsValid = true;					// method is const for const objects
	}

	return textLength;
}